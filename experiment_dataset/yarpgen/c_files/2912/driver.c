#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned int var_1 = 180660530U;
unsigned long long int var_2 = 12143314044247556827ULL;
unsigned char var_5 = (unsigned char)25;
signed char var_8 = (signed char)1;
unsigned long long int var_9 = 9088215326389377861ULL;
long long int var_10 = 5490849251673334652LL;
int zero = 0;
unsigned short var_11 = (unsigned short)60787;
unsigned long long int var_12 = 13054853356648468621ULL;
long long int var_13 = -3925995511315163599LL;
long long int var_14 = 2571362965166721104LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

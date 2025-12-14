#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13037376597594770432ULL;
unsigned char var_2 = (unsigned char)181;
short var_3 = (short)-2389;
signed char var_4 = (signed char)-17;
short var_9 = (short)-11182;
int zero = 0;
short var_13 = (short)27687;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

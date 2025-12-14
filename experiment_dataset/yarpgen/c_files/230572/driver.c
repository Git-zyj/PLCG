#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1061;
short var_2 = (short)1986;
unsigned int var_3 = 3687885875U;
signed char var_5 = (signed char)118;
int var_8 = 1127570299;
signed char var_9 = (signed char)-19;
long long int var_12 = -7533151118768263547LL;
signed char var_13 = (signed char)26;
unsigned long long int var_17 = 17694264362471275999ULL;
unsigned char var_18 = (unsigned char)40;
signed char var_19 = (signed char)94;
int zero = 0;
signed char var_20 = (signed char)7;
short var_21 = (short)-29319;
unsigned short var_22 = (unsigned short)44701;
long long int var_23 = 7263992581683803285LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

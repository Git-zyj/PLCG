#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3935611497U;
int var_4 = -1883061693;
long long int var_5 = -1476776860590537918LL;
unsigned short var_6 = (unsigned short)8096;
unsigned short var_7 = (unsigned short)9680;
signed char var_10 = (signed char)-94;
unsigned int var_11 = 2829083508U;
int zero = 0;
unsigned int var_12 = 879655784U;
unsigned char var_13 = (unsigned char)212;
unsigned int var_14 = 2573781996U;
void init() {
}

void checksum() {
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

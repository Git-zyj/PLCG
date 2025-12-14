#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18305135099206414252ULL;
unsigned long long int var_2 = 8825851220216544092ULL;
unsigned short var_9 = (unsigned short)28965;
signed char var_11 = (signed char)58;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3210032536U;
long long int var_15 = 5112925900457757911LL;
short var_16 = (short)29784;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

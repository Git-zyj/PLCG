#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64477;
unsigned int var_3 = 431968579U;
signed char var_4 = (signed char)-124;
unsigned long long int var_7 = 1789495114068251112ULL;
long long int var_10 = 9114529556284113616LL;
unsigned short var_13 = (unsigned short)26618;
unsigned short var_15 = (unsigned short)19427;
unsigned short var_17 = (unsigned short)43122;
unsigned int var_18 = 463060406U;
int zero = 0;
unsigned short var_19 = (unsigned short)9784;
unsigned int var_20 = 1541375876U;
int var_21 = -486288826;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5555;
int var_3 = -754610560;
unsigned long long int var_5 = 14198379829280518771ULL;
int var_8 = -107464487;
signed char var_9 = (signed char)-96;
long long int var_12 = 3767980729756689399LL;
int var_14 = 1369294343;
short var_16 = (short)-10032;
short var_17 = (short)-20872;
int zero = 0;
unsigned char var_18 = (unsigned char)237;
short var_19 = (short)21287;
short var_20 = (short)20222;
signed char var_21 = (signed char)126;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

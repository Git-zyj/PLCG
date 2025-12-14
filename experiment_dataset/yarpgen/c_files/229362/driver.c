#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24497;
unsigned short var_2 = (unsigned short)1328;
long long int var_3 = 3336046567557954846LL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-49;
unsigned long long int var_13 = 1185530654605250572ULL;
unsigned long long int var_19 = 14059115601067010134ULL;
int zero = 0;
signed char var_20 = (signed char)33;
short var_21 = (short)22646;
short var_22 = (short)-28264;
void init() {
}

void checksum() {
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

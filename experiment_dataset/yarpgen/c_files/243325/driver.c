#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 779275163;
signed char var_3 = (signed char)97;
signed char var_5 = (signed char)-100;
int var_6 = 1005929229;
int var_7 = -1615317050;
unsigned char var_13 = (unsigned char)115;
unsigned int var_15 = 2030673424U;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)73;
unsigned long long int var_18 = 11597712377050391357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

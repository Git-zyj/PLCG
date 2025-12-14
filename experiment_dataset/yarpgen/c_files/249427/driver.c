#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6401601169678953051ULL;
unsigned long long int var_1 = 17657437754920197798ULL;
signed char var_2 = (signed char)-115;
signed char var_4 = (signed char)127;
unsigned int var_7 = 1459298965U;
short var_9 = (short)-25916;
unsigned char var_12 = (unsigned char)204;
int zero = 0;
int var_14 = 988301477;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 14576396740835071609ULL;
unsigned short var_17 = (unsigned short)24467;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

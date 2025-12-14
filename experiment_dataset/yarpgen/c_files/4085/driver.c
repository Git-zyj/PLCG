#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 637172192;
long long int var_3 = 2630675623613851997LL;
unsigned short var_5 = (unsigned short)49101;
int var_7 = 325945295;
signed char var_8 = (signed char)84;
int var_11 = -396023161;
signed char var_12 = (signed char)43;
unsigned short var_14 = (unsigned short)39824;
int zero = 0;
unsigned char var_16 = (unsigned char)178;
unsigned long long int var_17 = 1318808697164270459ULL;
int var_18 = -581328988;
unsigned short var_19 = (unsigned short)13925;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

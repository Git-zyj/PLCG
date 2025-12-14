#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)167;
_Bool var_3 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)146;
long long int var_16 = 7164248853370875414LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4215504519U;
unsigned long long int var_22 = 14424212827735553111ULL;
int var_23 = -2066945137;
int var_24 = -534013785;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

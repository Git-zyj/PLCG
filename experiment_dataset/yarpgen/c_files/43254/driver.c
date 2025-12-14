#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_11 = (unsigned char)10;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)10;
unsigned char var_15 = (unsigned char)255;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)165;
unsigned long long int var_21 = 8688299220406658625ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

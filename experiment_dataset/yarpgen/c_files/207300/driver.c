#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7974264666266208705LL;
unsigned short var_3 = (unsigned short)11737;
signed char var_6 = (signed char)115;
int var_7 = -1670208926;
unsigned char var_8 = (unsigned char)69;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -1552538002;
unsigned int var_17 = 725013025U;
void init() {
}

void checksum() {
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

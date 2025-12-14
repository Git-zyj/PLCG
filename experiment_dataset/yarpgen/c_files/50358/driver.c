#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8002;
unsigned char var_2 = (unsigned char)114;
long long int var_3 = 7708688399663967833LL;
unsigned short var_4 = (unsigned short)15309;
long long int var_5 = 1572083105920368010LL;
unsigned long long int var_6 = 18430134844834189745ULL;
short var_8 = (short)-10227;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

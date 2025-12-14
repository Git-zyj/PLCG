#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42882;
unsigned char var_3 = (unsigned char)199;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)11579;
unsigned long long int var_8 = 8649502507930798839ULL;
unsigned short var_9 = (unsigned short)41052;
int zero = 0;
unsigned char var_10 = (unsigned char)63;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

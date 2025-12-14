#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)201;
unsigned char var_3 = (unsigned char)41;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)51533;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)187;
int zero = 0;
short var_10 = (short)14708;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

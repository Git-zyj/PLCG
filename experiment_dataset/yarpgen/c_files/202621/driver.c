#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = -426927125;
int var_7 = -692866302;
unsigned short var_8 = (unsigned short)45636;
unsigned char var_9 = (unsigned char)207;
int zero = 0;
signed char var_10 = (signed char)99;
unsigned int var_11 = 708649828U;
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

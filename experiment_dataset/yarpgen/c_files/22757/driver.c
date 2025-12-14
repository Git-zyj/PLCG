#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 715071574;
int var_13 = 440705664;
int var_17 = 1906824380;
unsigned int var_18 = 248202393U;
int zero = 0;
unsigned short var_19 = (unsigned short)17859;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)63;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14714955169758556535ULL;
long long int var_2 = -2223319682335956780LL;
signed char var_3 = (signed char)-1;
unsigned long long int var_8 = 17397314135515272755ULL;
signed char var_10 = (signed char)-60;
unsigned char var_11 = (unsigned char)137;
signed char var_14 = (signed char)19;
int var_16 = -383404625;
unsigned int var_17 = 295076344U;
int zero = 0;
unsigned char var_18 = (unsigned char)165;
unsigned short var_19 = (unsigned short)30526;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

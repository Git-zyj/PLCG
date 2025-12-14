#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2166811546U;
_Bool var_2 = (_Bool)0;
int var_3 = 81071735;
unsigned short var_4 = (unsigned short)19793;
unsigned char var_6 = (unsigned char)39;
long long int var_7 = -2483136037159028520LL;
unsigned char var_8 = (unsigned char)131;
int zero = 0;
unsigned char var_10 = (unsigned char)48;
int var_11 = 1351004525;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)57173;
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

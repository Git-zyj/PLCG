#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1564609336641667895LL;
signed char var_2 = (signed char)23;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)99;
unsigned char var_11 = (unsigned char)73;
int zero = 0;
unsigned int var_15 = 243193369U;
int var_16 = 1679298002;
unsigned short var_17 = (unsigned short)21071;
unsigned char var_18 = (unsigned char)226;
int var_19 = -1442363325;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

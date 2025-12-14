#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
short var_2 = (short)-27425;
unsigned int var_5 = 3099196729U;
long long int var_6 = -3638576484981032915LL;
unsigned long long int var_9 = 6594606521861917625ULL;
unsigned char var_10 = (unsigned char)233;
unsigned long long int var_11 = 14930521473663552745ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)142;
signed char var_13 = (signed char)13;
unsigned int var_14 = 3862431052U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

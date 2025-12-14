#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1439907176;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 11759113153013747406ULL;
unsigned char var_13 = (unsigned char)229;
int zero = 0;
unsigned char var_20 = (unsigned char)219;
int var_21 = -455397610;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned short var_1 = (unsigned short)4510;
unsigned int var_2 = 409380293U;
unsigned char var_3 = (unsigned char)194;
unsigned char var_6 = (unsigned char)168;
unsigned int var_8 = 3078691274U;
unsigned char var_9 = (unsigned char)72;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 16971603595842982525ULL;
unsigned char var_16 = (unsigned char)63;
int zero = 0;
unsigned int var_19 = 693558067U;
unsigned int var_20 = 1504920730U;
void init() {
}

void checksum() {
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

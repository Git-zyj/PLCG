#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1245061996;
unsigned short var_1 = (unsigned short)11168;
unsigned char var_2 = (unsigned char)201;
unsigned int var_3 = 241878696U;
unsigned char var_5 = (unsigned char)72;
int var_6 = 1450570791;
unsigned long long int var_7 = 16421365455722204611ULL;
signed char var_8 = (signed char)-53;
unsigned int var_9 = 3066784322U;
unsigned char var_11 = (unsigned char)8;
signed char var_12 = (signed char)117;
int zero = 0;
unsigned long long int var_13 = 5274022216073896833ULL;
long long int var_14 = -5544508393004723527LL;
long long int var_15 = 6787146744656569941LL;
unsigned char var_16 = (unsigned char)229;
unsigned char var_17 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

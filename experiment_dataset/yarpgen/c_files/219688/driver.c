#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned char var_2 = (unsigned char)89;
unsigned short var_3 = (unsigned short)36744;
unsigned char var_5 = (unsigned char)87;
unsigned char var_7 = (unsigned char)164;
long long int var_8 = -8391467713702118735LL;
unsigned char var_9 = (unsigned char)237;
int zero = 0;
int var_10 = -273673041;
long long int var_11 = -5542534574283232296LL;
unsigned long long int var_12 = 8692876812081817277ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

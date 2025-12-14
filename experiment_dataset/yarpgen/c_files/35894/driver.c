#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13494479447263592847ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)54;
int var_4 = -2078989486;
int var_5 = -618450528;
unsigned long long int var_8 = 13187904197341552247ULL;
unsigned char var_9 = (unsigned char)133;
signed char var_10 = (signed char)-94;
unsigned short var_11 = (unsigned short)5818;
unsigned char var_12 = (unsigned char)131;
int zero = 0;
short var_13 = (short)1371;
unsigned short var_14 = (unsigned short)57182;
void init() {
}

void checksum() {
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

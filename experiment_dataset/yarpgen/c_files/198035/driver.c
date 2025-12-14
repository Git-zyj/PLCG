#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1552060366U;
int var_1 = -1233112910;
signed char var_2 = (signed char)-62;
int var_3 = -1565171839;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)59889;
int var_6 = 428996715;
unsigned short var_8 = (unsigned short)38165;
unsigned int var_10 = 289782201U;
unsigned long long int var_12 = 453995102661196305ULL;
unsigned short var_14 = (unsigned short)17700;
int zero = 0;
signed char var_15 = (signed char)-72;
long long int var_16 = -7471353386965162303LL;
unsigned char var_17 = (unsigned char)124;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)7968;
unsigned char var_4 = (unsigned char)155;
_Bool var_8 = (_Bool)1;
int var_10 = -1672454502;
unsigned short var_14 = (unsigned short)58567;
unsigned short var_16 = (unsigned short)64655;
unsigned short var_17 = (unsigned short)44948;
int zero = 0;
unsigned long long int var_18 = 1829323934017854457ULL;
long long int var_19 = 1146004583734254393LL;
unsigned short var_20 = (unsigned short)21462;
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

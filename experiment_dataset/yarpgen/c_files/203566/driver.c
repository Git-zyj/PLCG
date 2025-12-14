#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53114;
unsigned short var_2 = (unsigned short)57036;
unsigned short var_3 = (unsigned short)12172;
_Bool var_4 = (_Bool)1;
int var_8 = -1754306721;
int var_9 = -913551327;
int var_10 = -1544144618;
int zero = 0;
unsigned short var_14 = (unsigned short)4924;
unsigned short var_15 = (unsigned short)318;
unsigned int var_16 = 1960393022U;
unsigned short var_17 = (unsigned short)63014;
void init() {
}

void checksum() {
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

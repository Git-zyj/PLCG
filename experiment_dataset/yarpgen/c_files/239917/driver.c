#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 829046298;
unsigned short var_1 = (unsigned short)13759;
int var_2 = -1035997266;
long long int var_3 = 1509272623194464626LL;
unsigned int var_4 = 2181715342U;
unsigned char var_8 = (unsigned char)249;
long long int var_9 = 2363869355490743184LL;
unsigned int var_12 = 1700340661U;
unsigned int var_14 = 3032449257U;
int zero = 0;
long long int var_15 = 8277634551550486729LL;
short var_16 = (short)11549;
unsigned short var_17 = (unsigned short)34361;
long long int var_18 = 5884731160845057696LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -549233299;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-5060;
long long int var_7 = -1493006761322364488LL;
long long int var_8 = -3779982105750950438LL;
unsigned int var_15 = 681946608U;
int var_17 = -73350752;
int zero = 0;
int var_18 = -413574621;
unsigned short var_19 = (unsigned short)30145;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

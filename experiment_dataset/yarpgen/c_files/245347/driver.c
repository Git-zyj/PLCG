#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39369;
short var_2 = (short)5203;
short var_3 = (short)25023;
unsigned int var_4 = 3457531593U;
long long int var_5 = 2149303640493129264LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_12 = -1070190948;
int var_15 = -382990166;
int zero = 0;
unsigned long long int var_16 = 13097228138896082412ULL;
signed char var_17 = (signed char)40;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
_Bool var_5 = (_Bool)1;
int var_6 = -67295522;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)15;
unsigned int var_11 = 1091712499U;
signed char var_13 = (signed char)110;
int zero = 0;
unsigned short var_14 = (unsigned short)2798;
unsigned int var_15 = 1685967705U;
signed char var_16 = (signed char)29;
signed char var_17 = (signed char)-8;
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

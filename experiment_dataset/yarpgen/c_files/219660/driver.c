#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 57474623974686427ULL;
short var_6 = (short)2497;
unsigned int var_7 = 3878010711U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2164968920U;
unsigned int var_12 = 280376252U;
unsigned short var_13 = (unsigned short)25145;
short var_14 = (short)7218;
int zero = 0;
short var_15 = (short)-12570;
unsigned long long int var_16 = 16519800901795247068ULL;
long long int var_17 = 8642722334499327722LL;
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

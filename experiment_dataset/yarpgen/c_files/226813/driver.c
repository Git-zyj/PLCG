#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22114;
unsigned char var_1 = (unsigned char)237;
signed char var_5 = (signed char)11;
signed char var_7 = (signed char)91;
short var_8 = (short)-14250;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_13 = (short)4792;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9130332291032882283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

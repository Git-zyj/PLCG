#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2683;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 14349139661099123984ULL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)7141;
unsigned char var_10 = (unsigned char)86;
int zero = 0;
short var_11 = (short)27501;
int var_12 = -224898236;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

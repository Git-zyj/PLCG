#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13936;
short var_3 = (short)31191;
_Bool var_4 = (_Bool)0;
unsigned int var_12 = 1722537262U;
short var_15 = (short)-15308;
int zero = 0;
unsigned long long int var_16 = 6338516066037007192ULL;
int var_17 = -590360302;
unsigned char var_18 = (unsigned char)231;
void init() {
}

void checksum() {
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

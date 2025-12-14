#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 221066397U;
unsigned int var_4 = 2898703506U;
short var_6 = (short)-7043;
short var_9 = (short)31835;
int zero = 0;
int var_12 = 1808145069;
unsigned int var_13 = 699450558U;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)14821;
short var_16 = (short)-7763;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

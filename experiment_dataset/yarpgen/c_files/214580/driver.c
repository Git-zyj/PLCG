#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1095703700;
_Bool var_3 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-24800;
int zero = 0;
int var_10 = 1711262607;
unsigned int var_11 = 4179223188U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

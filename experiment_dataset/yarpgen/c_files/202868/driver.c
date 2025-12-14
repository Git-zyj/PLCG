#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2111100025U;
unsigned int var_6 = 1008149597U;
short var_8 = (short)-20390;
int zero = 0;
unsigned int var_11 = 3393803451U;
unsigned int var_12 = 3578704577U;
unsigned int var_13 = 2781394813U;
signed char var_14 = (signed char)85;
unsigned long long int var_15 = 8500344880466038917ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

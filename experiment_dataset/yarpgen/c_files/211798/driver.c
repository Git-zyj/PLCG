#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-22465;
unsigned int var_11 = 692623573U;
int var_12 = 1045328284;
int zero = 0;
int var_15 = -811194545;
int var_16 = 1579942588;
void init() {
}

void checksum() {
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

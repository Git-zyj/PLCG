#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)72;
int var_9 = -1334423399;
short var_11 = (short)-13526;
signed char var_12 = (signed char)62;
signed char var_13 = (signed char)-74;
int zero = 0;
signed char var_15 = (signed char)-10;
unsigned int var_16 = 392822856U;
int var_17 = 165407222;
signed char var_18 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

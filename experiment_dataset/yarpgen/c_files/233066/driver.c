#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1287397614U;
unsigned int var_3 = 1338670947U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)23905;
signed char var_11 = (signed char)99;
int zero = 0;
int var_13 = -1966417434;
short var_14 = (short)-5456;
unsigned char var_15 = (unsigned char)119;
short var_16 = (short)7599;
signed char var_17 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1126894972U;
unsigned char var_2 = (unsigned char)152;
int var_3 = 1390806524;
int var_4 = -1887198506;
unsigned char var_5 = (unsigned char)248;
int var_7 = 965901086;
unsigned int var_9 = 3165813159U;
signed char var_10 = (signed char)-8;
int zero = 0;
unsigned int var_11 = 528986536U;
unsigned char var_12 = (unsigned char)229;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1253199978U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

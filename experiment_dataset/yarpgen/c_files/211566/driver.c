#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4067847362U;
unsigned int var_7 = 884361651U;
unsigned int var_8 = 2068117925U;
unsigned int var_9 = 4017098771U;
unsigned short var_10 = (unsigned short)8293;
signed char var_14 = (signed char)101;
int zero = 0;
int var_15 = -1480282921;
short var_16 = (short)22085;
int var_17 = 639088778;
short var_18 = (short)13604;
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

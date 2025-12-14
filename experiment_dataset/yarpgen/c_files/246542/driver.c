#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1049830335;
unsigned short var_4 = (unsigned short)40124;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_11 = -2146512620;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-90;
unsigned int var_14 = 3754933232U;
unsigned int var_15 = 3474170781U;
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

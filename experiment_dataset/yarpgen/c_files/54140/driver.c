#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)25;
unsigned int var_10 = 785271775U;
signed char var_12 = (signed char)-95;
unsigned int var_13 = 4134232978U;
int zero = 0;
int var_16 = -580026043;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)98;
signed char var_19 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

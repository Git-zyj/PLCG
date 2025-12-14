#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-84;
int var_9 = 164808213;
unsigned int var_10 = 2813854332U;
signed char var_14 = (signed char)73;
signed char var_15 = (signed char)-18;
short var_18 = (short)-19592;
int zero = 0;
unsigned char var_20 = (unsigned char)235;
int var_21 = -1966263322;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

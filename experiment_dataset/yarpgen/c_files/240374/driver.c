#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3699996992165217839ULL;
short var_1 = (short)-30094;
unsigned short var_5 = (unsigned short)9511;
unsigned int var_9 = 3463107202U;
unsigned int var_10 = 3726291804U;
unsigned int var_11 = 2108351625U;
unsigned char var_12 = (unsigned char)44;
unsigned int var_17 = 3130203527U;
int zero = 0;
signed char var_19 = (signed char)15;
unsigned char var_20 = (unsigned char)163;
short var_21 = (short)-11694;
unsigned int var_22 = 2149545964U;
unsigned int var_23 = 509362217U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

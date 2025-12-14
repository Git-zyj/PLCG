#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1557299877;
unsigned char var_3 = (unsigned char)59;
unsigned char var_7 = (unsigned char)50;
signed char var_8 = (signed char)67;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1433125297U;
unsigned int var_13 = 1125513895U;
int zero = 0;
unsigned int var_14 = 3135127916U;
unsigned int var_15 = 638799911U;
unsigned int var_16 = 1352433433U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

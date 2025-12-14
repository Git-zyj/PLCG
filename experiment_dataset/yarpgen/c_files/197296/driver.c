#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
long long int var_2 = -1038796812976956811LL;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)-97;
int var_11 = 30557920;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
signed char var_14 = (signed char)60;
long long int var_15 = 4072623628240062503LL;
unsigned int var_16 = 1405551265U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

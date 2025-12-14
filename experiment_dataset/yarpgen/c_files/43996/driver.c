#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3822699476086077491LL;
unsigned int var_1 = 2434344265U;
long long int var_3 = 8451793220760121356LL;
long long int var_5 = 5381933260006586733LL;
unsigned int var_7 = 2686821334U;
int zero = 0;
unsigned int var_12 = 2956089078U;
unsigned char var_13 = (unsigned char)151;
signed char var_14 = (signed char)-126;
void init() {
}

void checksum() {
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

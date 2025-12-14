#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 686310569827283308ULL;
unsigned long long int var_8 = 10864195502420534284ULL;
unsigned short var_14 = (unsigned short)7843;
signed char var_15 = (signed char)-105;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3192406899U;
signed char var_20 = (signed char)103;
signed char var_21 = (signed char)-19;
signed char var_22 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

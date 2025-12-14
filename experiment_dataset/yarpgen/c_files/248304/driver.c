#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3790788309073330051ULL;
int var_5 = 453981478;
long long int var_15 = -7217657926403126540LL;
signed char var_16 = (signed char)-124;
long long int var_19 = -2562123400835834016LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4264470260U;
int var_22 = 1353207320;
void init() {
}

void checksum() {
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

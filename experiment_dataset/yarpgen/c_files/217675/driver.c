#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1837708366010247120LL;
unsigned long long int var_3 = 2740939063262200841ULL;
signed char var_4 = (signed char)-77;
short var_7 = (short)-27267;
signed char var_10 = (signed char)103;
short var_12 = (short)-20916;
int zero = 0;
signed char var_16 = (signed char)67;
unsigned int var_17 = 450191396U;
unsigned short var_18 = (unsigned short)34147;
unsigned int var_19 = 2807391847U;
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

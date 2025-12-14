#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3476797483U;
unsigned long long int var_5 = 4718916063070628770ULL;
signed char var_10 = (signed char)-124;
signed char var_11 = (signed char)-67;
signed char var_19 = (signed char)72;
int zero = 0;
long long int var_20 = 3841808064348701095LL;
unsigned long long int var_21 = 3299069464959329204ULL;
short var_22 = (short)10782;
short var_23 = (short)11107;
void init() {
}

void checksum() {
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

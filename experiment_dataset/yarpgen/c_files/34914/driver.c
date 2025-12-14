#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14079474528031980865ULL;
unsigned long long int var_2 = 6749094150498953486ULL;
unsigned short var_4 = (unsigned short)20675;
int var_6 = 1120472062;
signed char var_14 = (signed char)-33;
signed char var_17 = (signed char)91;
int zero = 0;
unsigned int var_20 = 2420177770U;
int var_21 = 953568898;
long long int var_22 = -8174862808479177481LL;
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

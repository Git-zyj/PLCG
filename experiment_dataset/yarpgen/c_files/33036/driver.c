#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8227;
signed char var_5 = (signed char)-90;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 3894761316U;
unsigned int var_11 = 455588U;
unsigned char var_12 = (unsigned char)241;
unsigned long long int var_13 = 2396398928342835514ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1802041757;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-127;
long long int var_8 = 997632528014606837LL;
short var_9 = (short)-19091;
int zero = 0;
short var_12 = (short)-13006;
signed char var_13 = (signed char)-53;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21390;
signed char var_4 = (signed char)-76;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-29839;
unsigned int var_15 = 2286514815U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

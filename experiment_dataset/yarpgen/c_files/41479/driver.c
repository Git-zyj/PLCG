#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned char var_1 = (unsigned char)139;
signed char var_5 = (signed char)-107;
unsigned int var_8 = 3957628838U;
unsigned char var_9 = (unsigned char)166;
int zero = 0;
signed char var_10 = (signed char)119;
signed char var_11 = (signed char)-13;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1676630584U;
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

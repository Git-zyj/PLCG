#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 155427490U;
int var_8 = -1421564543;
int var_9 = 1098615098;
signed char var_13 = (signed char)0;
int zero = 0;
long long int var_15 = -4859814123004824614LL;
unsigned short var_16 = (unsigned short)742;
int var_17 = -1097040124;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)127;
unsigned int var_6 = 133645551U;
int zero = 0;
signed char var_11 = (signed char)-73;
unsigned int var_12 = 829521811U;
signed char var_13 = (signed char)59;
unsigned short var_14 = (unsigned short)31305;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 535041654U;
int var_5 = -976805743;
unsigned int var_8 = 2521137896U;
int zero = 0;
signed char var_11 = (signed char)27;
unsigned long long int var_12 = 12655705431318404154ULL;
short var_13 = (short)26898;
void init() {
}

void checksum() {
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

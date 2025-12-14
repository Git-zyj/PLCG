#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 113415854U;
int var_2 = -641986603;
signed char var_6 = (signed char)51;
int zero = 0;
unsigned long long int var_12 = 16767298405163344912ULL;
unsigned short var_13 = (unsigned short)8692;
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

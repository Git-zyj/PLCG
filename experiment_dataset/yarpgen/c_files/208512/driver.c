#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22287;
unsigned int var_2 = 1255727055U;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 1751226257763912013ULL;
long long int var_21 = 2311317361249992625LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

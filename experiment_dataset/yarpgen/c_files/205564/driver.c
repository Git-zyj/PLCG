#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10957;
short var_14 = (short)24832;
short var_16 = (short)23425;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1760335018;
unsigned int var_22 = 874109523U;
unsigned long long int var_23 = 2458720067698217596ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

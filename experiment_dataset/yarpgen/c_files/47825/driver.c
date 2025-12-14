#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)11635;
unsigned short var_7 = (unsigned short)53493;
long long int var_11 = 9180782379882329383LL;
int zero = 0;
signed char var_13 = (signed char)-121;
long long int var_14 = 5765989774508417232LL;
unsigned long long int var_15 = 7680548486130302242ULL;
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

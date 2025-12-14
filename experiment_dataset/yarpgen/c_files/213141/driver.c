#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1593440359U;
unsigned long long int var_4 = 180845918008268821ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 7763075433858587067ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)54375;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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

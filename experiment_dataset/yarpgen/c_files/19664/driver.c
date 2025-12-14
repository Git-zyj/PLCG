#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8225613878897251787LL;
short var_5 = (short)24837;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 8206566642304647697ULL;
long long int var_14 = 961190142789124193LL;
unsigned int var_15 = 2077554618U;
short var_16 = (short)12049;
int zero = 0;
long long int var_18 = -9002454250811125345LL;
unsigned char var_19 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

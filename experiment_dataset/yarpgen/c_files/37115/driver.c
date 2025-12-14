#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11405093118211914544ULL;
unsigned long long int var_5 = 16848997410006820780ULL;
unsigned long long int var_7 = 5306282285937543604ULL;
short var_12 = (short)10295;
int zero = 0;
long long int var_16 = 455425945517316960LL;
short var_17 = (short)32269;
void init() {
}

void checksum() {
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

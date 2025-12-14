#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 1355860649U;
unsigned long long int var_14 = 2322362963243736614ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)19637;
int zero = 0;
short var_20 = (short)-17723;
short var_21 = (short)-10156;
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

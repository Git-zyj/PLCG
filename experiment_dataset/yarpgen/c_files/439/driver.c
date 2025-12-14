#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2012356427;
long long int var_8 = -423436109922890550LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)145;
unsigned short var_21 = (unsigned short)59113;
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

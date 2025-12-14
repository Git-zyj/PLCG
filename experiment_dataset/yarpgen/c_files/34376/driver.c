#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2480;
unsigned short var_2 = (unsigned short)59976;
unsigned short var_5 = (unsigned short)9096;
_Bool var_9 = (_Bool)1;
long long int var_12 = 2005465472799665381LL;
int zero = 0;
unsigned short var_15 = (unsigned short)41054;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

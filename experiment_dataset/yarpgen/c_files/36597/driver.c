#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8241673675075360247LL;
unsigned short var_4 = (unsigned short)927;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 2167801022U;
signed char var_15 = (signed char)78;
int zero = 0;
long long int var_16 = -1006819106239809244LL;
unsigned short var_17 = (unsigned short)55751;
unsigned char var_18 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

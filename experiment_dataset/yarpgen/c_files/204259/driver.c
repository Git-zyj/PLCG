#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 12391233796916491826ULL;
long long int var_7 = 7224237398854215609LL;
unsigned char var_10 = (unsigned char)68;
int zero = 0;
unsigned short var_15 = (unsigned short)54705;
signed char var_16 = (signed char)79;
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

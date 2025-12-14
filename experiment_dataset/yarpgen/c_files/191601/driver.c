#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
unsigned short var_1 = (unsigned short)48553;
long long int var_6 = 7653754462596702713LL;
int zero = 0;
unsigned long long int var_15 = 13279324367590805257ULL;
unsigned int var_16 = 277253829U;
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

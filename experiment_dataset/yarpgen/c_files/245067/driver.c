#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
long long int var_4 = 6228007026424160531LL;
int var_6 = 66201699;
unsigned int var_8 = 1219599023U;
int zero = 0;
int var_11 = 1711196066;
unsigned char var_12 = (unsigned char)120;
unsigned int var_13 = 1795494878U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

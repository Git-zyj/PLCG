#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1742070208794552088LL;
_Bool var_5 = (_Bool)0;
long long int var_8 = -1615429481709958758LL;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
unsigned short var_14 = (unsigned short)48135;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

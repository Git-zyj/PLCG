#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 562689260479690143LL;
unsigned char var_7 = (unsigned char)27;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_13 = -9084775120095518326LL;
signed char var_14 = (signed char)105;
long long int var_15 = 7264680106703554177LL;
signed char var_16 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

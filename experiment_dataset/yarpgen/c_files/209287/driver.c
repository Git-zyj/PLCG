#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1440907441133953718LL;
short var_1 = (short)25681;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1618762284U;
unsigned int var_4 = 723295994U;
unsigned int var_8 = 2556696661U;
long long int var_9 = -6891312033388675753LL;
int zero = 0;
unsigned short var_10 = (unsigned short)39595;
short var_11 = (short)7075;
unsigned short var_12 = (unsigned short)5304;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

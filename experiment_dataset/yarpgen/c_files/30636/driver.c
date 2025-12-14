#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_9 = -6774671358950470163LL;
signed char var_14 = (signed char)51;
int zero = 0;
long long int var_20 = 6739656469110011022LL;
unsigned short var_21 = (unsigned short)53489;
unsigned long long int var_22 = 17649846683281184549ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

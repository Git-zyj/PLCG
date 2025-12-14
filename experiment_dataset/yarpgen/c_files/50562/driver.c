#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22004;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)41447;
int zero = 0;
short var_13 = (short)17257;
long long int var_14 = -6097932010818158650LL;
signed char var_15 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

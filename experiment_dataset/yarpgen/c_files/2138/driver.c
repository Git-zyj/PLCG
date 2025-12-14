#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
short var_3 = (short)18665;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)41030;
long long int var_10 = 3519768135733966161LL;
unsigned int var_11 = 656912965U;
int zero = 0;
signed char var_12 = (signed char)123;
unsigned char var_13 = (unsigned char)252;
void init() {
}

void checksum() {
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

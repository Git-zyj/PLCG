#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)45362;
signed char var_10 = (signed char)15;
_Bool var_13 = (_Bool)0;
int var_14 = 1307350451;
int zero = 0;
int var_19 = -1803275266;
unsigned short var_20 = (unsigned short)57338;
unsigned int var_21 = 1935357822U;
signed char var_22 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3454864894U;
unsigned short var_3 = (unsigned short)54778;
long long int var_7 = 6117076177419144120LL;
int var_8 = -593851735;
unsigned short var_9 = (unsigned short)21899;
int zero = 0;
unsigned short var_13 = (unsigned short)15872;
unsigned long long int var_14 = 2213549396151358009ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)38;
long long int var_17 = 2424998267937486088LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

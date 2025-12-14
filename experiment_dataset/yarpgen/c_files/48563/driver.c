#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)4192;
unsigned int var_16 = 717599032U;
int zero = 0;
signed char var_17 = (signed char)25;
unsigned short var_18 = (unsigned short)15216;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

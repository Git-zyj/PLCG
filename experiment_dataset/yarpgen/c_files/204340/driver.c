#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)166;
unsigned int var_6 = 1308579498U;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)123;
int var_15 = -301319003;
int zero = 0;
unsigned int var_17 = 938171689U;
unsigned int var_18 = 3568097491U;
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

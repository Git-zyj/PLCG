#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 716225004681131165LL;
unsigned char var_4 = (unsigned char)27;
int var_6 = 1680675739;
int var_8 = 1420855041;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 701046816;
int var_12 = -333753;
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

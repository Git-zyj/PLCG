#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 673988375;
unsigned short var_4 = (unsigned short)19031;
int var_6 = -1212747972;
unsigned short var_7 = (unsigned short)49199;
int zero = 0;
unsigned int var_12 = 1260334725U;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2821786447513144891LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

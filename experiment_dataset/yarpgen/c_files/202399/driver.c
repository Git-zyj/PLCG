#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1300084855179416265LL;
long long int var_6 = 4439951067467665463LL;
long long int var_7 = 7306774732458080655LL;
long long int var_10 = -3800231102734605523LL;
int zero = 0;
unsigned short var_15 = (unsigned short)42447;
int var_16 = -538873628;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

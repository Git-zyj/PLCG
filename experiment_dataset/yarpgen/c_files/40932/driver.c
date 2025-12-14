#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
long long int var_5 = -4891065242336556984LL;
unsigned int var_8 = 1576849368U;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1829149808;
unsigned int var_12 = 889052729U;
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

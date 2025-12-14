#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3526290491U;
_Bool var_6 = (_Bool)1;
int var_8 = 407847057;
int zero = 0;
long long int var_10 = -5906606207085574322LL;
unsigned short var_11 = (unsigned short)62200;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

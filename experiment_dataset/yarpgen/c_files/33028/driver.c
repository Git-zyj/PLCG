#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 754551359;
unsigned short var_4 = (unsigned short)53952;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 1145870582356017895LL;
unsigned char var_15 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

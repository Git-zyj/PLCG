#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1925238559260298039LL;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_13 = -4652677094824677712LL;
unsigned short var_14 = (unsigned short)45122;
void init() {
}

void checksum() {
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

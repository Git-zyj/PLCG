#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46337;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 55885267U;
long long int var_9 = -2425650923579800403LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8253111432017362079ULL;
unsigned short var_12 = (unsigned short)23852;
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

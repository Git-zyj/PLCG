#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 911527831;
unsigned short var_6 = (unsigned short)43293;
long long int var_12 = 9003223865467446860LL;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-124;
void init() {
}

void checksum() {
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

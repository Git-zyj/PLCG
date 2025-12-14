#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)19;
signed char var_15 = (signed char)-43;
unsigned short var_16 = (unsigned short)8455;
int zero = 0;
unsigned long long int var_19 = 1932891911914129626ULL;
short var_20 = (short)-6931;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

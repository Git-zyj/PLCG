#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2056011431U;
unsigned char var_5 = (unsigned char)219;
unsigned short var_13 = (unsigned short)2794;
int zero = 0;
unsigned long long int var_15 = 6643730150434182672ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4134839199350996100LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

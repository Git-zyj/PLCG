#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)18738;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)54222;
unsigned char var_11 = (unsigned char)92;
int zero = 0;
unsigned long long int var_12 = 13842121009640517988ULL;
unsigned char var_13 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

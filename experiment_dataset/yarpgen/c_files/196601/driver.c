#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)18;
unsigned char var_6 = (unsigned char)235;
unsigned short var_12 = (unsigned short)23504;
_Bool var_13 = (_Bool)0;
unsigned short var_19 = (unsigned short)32420;
int zero = 0;
int var_20 = 1242298142;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

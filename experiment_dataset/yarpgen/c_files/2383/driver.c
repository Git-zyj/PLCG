#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)59;
_Bool var_4 = (_Bool)0;
short var_5 = (short)277;
unsigned char var_13 = (unsigned char)225;
int zero = 0;
short var_14 = (short)1768;
short var_15 = (short)18591;
signed char var_16 = (signed char)-107;
short var_17 = (short)23403;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

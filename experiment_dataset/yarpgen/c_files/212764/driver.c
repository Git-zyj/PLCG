#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3490;
unsigned long long int var_4 = 13942788853075849878ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
unsigned char var_20 = (unsigned char)102;
unsigned short var_21 = (unsigned short)3023;
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

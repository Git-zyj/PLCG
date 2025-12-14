#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -576785431;
unsigned char var_7 = (unsigned char)153;
unsigned char var_12 = (unsigned char)123;
unsigned short var_18 = (unsigned short)60283;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1655555674;
int var_21 = 1893983808;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

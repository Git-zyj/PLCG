#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12727922181343473213ULL;
unsigned short var_4 = (unsigned short)46437;
unsigned short var_6 = (unsigned short)23600;
unsigned char var_9 = (unsigned char)242;
int zero = 0;
unsigned short var_20 = (unsigned short)54162;
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

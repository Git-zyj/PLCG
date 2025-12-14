#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59773;
_Bool var_7 = (_Bool)0;
unsigned long long int var_13 = 9554755311659803822ULL;
int zero = 0;
short var_18 = (short)24050;
unsigned int var_19 = 897224580U;
unsigned char var_20 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

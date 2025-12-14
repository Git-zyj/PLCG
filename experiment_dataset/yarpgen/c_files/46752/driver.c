#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17654;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)148;
signed char var_12 = (signed char)31;
int zero = 0;
short var_17 = (short)-18352;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7592402561047857686LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

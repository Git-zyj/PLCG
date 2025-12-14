#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)67;
short var_6 = (short)18541;
unsigned char var_11 = (unsigned char)2;
unsigned short var_13 = (unsigned short)23513;
long long int var_16 = 1500919884635610692LL;
int zero = 0;
signed char var_17 = (signed char)46;
unsigned short var_18 = (unsigned short)63273;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11193;
int var_10 = -570620202;
unsigned short var_13 = (unsigned short)44515;
int var_14 = 581159680;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2620768085093621805ULL;
signed char var_18 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

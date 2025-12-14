#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12990628357712293886ULL;
short var_7 = (short)9070;
short var_8 = (short)-15068;
signed char var_9 = (signed char)-77;
unsigned short var_14 = (unsigned short)24661;
int zero = 0;
int var_17 = -80250740;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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

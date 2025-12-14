#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
unsigned long long int var_4 = 17932539228665561238ULL;
long long int var_7 = 6807463865337411383LL;
short var_8 = (short)-14034;
int zero = 0;
long long int var_16 = -4062236221770588921LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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

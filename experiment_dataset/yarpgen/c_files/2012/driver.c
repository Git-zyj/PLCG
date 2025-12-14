#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
signed char var_6 = (signed char)-4;
unsigned short var_11 = (unsigned short)16275;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1246341103U;
unsigned char var_15 = (unsigned char)187;
int var_16 = 2102474307;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

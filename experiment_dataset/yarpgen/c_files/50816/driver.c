#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)143;
_Bool var_3 = (_Bool)1;
signed char var_15 = (signed char)83;
int zero = 0;
unsigned int var_17 = 3856929060U;
long long int var_18 = 6220616533494041196LL;
unsigned short var_19 = (unsigned short)17638;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)145;
long long int var_4 = 2879774563524586101LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6829565776393289126LL;
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

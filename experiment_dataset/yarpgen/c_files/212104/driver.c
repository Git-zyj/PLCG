#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
long long int var_3 = 5527836994152733370LL;
unsigned char var_8 = (unsigned char)177;
int zero = 0;
long long int var_11 = -5581058710826330971LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

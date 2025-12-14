#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 128362581;
long long int var_3 = 3446675636379243685LL;
_Bool var_4 = (_Bool)0;
unsigned short var_11 = (unsigned short)3362;
int zero = 0;
signed char var_15 = (signed char)18;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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

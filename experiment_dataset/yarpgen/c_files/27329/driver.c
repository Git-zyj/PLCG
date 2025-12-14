#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)16;
_Bool var_5 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3139394691307000062ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-6636;
long long int var_19 = 184141767004788632LL;
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

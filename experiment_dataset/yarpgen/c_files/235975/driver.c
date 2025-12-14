#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8139735745882062549LL;
signed char var_2 = (signed char)42;
short var_5 = (short)-2231;
long long int var_8 = -3426761677570194062LL;
long long int var_13 = 2884728915282702676LL;
int zero = 0;
unsigned int var_18 = 3645482327U;
unsigned long long int var_19 = 1286446266930770935ULL;
void init() {
}

void checksum() {
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

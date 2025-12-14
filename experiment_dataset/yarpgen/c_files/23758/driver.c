#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1403490975U;
int var_4 = -81575028;
signed char var_14 = (signed char)23;
long long int var_17 = 4590173540871962252LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

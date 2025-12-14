#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)4929;
_Bool var_6 = (_Bool)1;
long long int var_9 = -2898438540585599774LL;
signed char var_14 = (signed char)78;
long long int var_15 = 651897050568832439LL;
int zero = 0;
unsigned short var_17 = (unsigned short)21076;
long long int var_18 = 4087648663998089273LL;
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

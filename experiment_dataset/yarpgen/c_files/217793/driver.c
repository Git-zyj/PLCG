#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6915024180911874547LL;
unsigned short var_3 = (unsigned short)38822;
_Bool var_5 = (_Bool)0;
long long int var_13 = 1837877020733565910LL;
int zero = 0;
long long int var_17 = 1320537778187648240LL;
long long int var_18 = 4484448831838858997LL;
signed char var_19 = (signed char)84;
signed char var_20 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

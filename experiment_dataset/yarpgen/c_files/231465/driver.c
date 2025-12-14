#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 712895762;
_Bool var_5 = (_Bool)1;
long long int var_7 = 3651435156780720955LL;
int zero = 0;
signed char var_16 = (signed char)33;
unsigned long long int var_17 = 6333200608505945984ULL;
long long int var_18 = -8222844716208133601LL;
unsigned short var_19 = (unsigned short)39089;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

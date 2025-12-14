#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_10 = -4149809546640575726LL;
long long int var_18 = -4280625118735101411LL;
int zero = 0;
short var_19 = (short)-20027;
short var_20 = (short)-27503;
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

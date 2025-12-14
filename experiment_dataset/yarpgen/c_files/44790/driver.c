#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -327373892;
_Bool var_3 = (_Bool)1;
short var_7 = (short)-17189;
int zero = 0;
long long int var_10 = 2830957746468970461LL;
long long int var_11 = -1689848190242148522LL;
int var_12 = 1478299285;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

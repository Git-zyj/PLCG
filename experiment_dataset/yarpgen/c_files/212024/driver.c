#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1532675855;
short var_6 = (short)-8329;
unsigned long long int var_7 = 17331953629928586232ULL;
short var_8 = (short)29104;
int zero = 0;
int var_16 = -2035536576;
int var_17 = -842605760;
long long int var_18 = 3359319794331105453LL;
signed char var_19 = (signed char)-98;
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

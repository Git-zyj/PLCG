#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4024367802U;
_Bool var_2 = (_Bool)1;
long long int var_10 = 5458002956163996927LL;
long long int var_12 = 4412977350485065182LL;
int zero = 0;
short var_13 = (short)-11868;
unsigned long long int var_14 = 8260690546558885155ULL;
int var_15 = -615641214;
unsigned char var_16 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

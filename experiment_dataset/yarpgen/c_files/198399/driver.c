#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5566622887221342260LL;
long long int var_1 = -6969228356173612408LL;
unsigned int var_2 = 1942489727U;
long long int var_3 = 6328785267446094695LL;
long long int var_4 = 4660876873903126851LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 4121988940U;
unsigned int var_9 = 3436501851U;
int zero = 0;
short var_10 = (short)-4736;
long long int var_11 = -4265048591698835879LL;
_Bool var_12 = (_Bool)1;
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

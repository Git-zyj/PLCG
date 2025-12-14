#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_4 = 640959837U;
unsigned char var_5 = (unsigned char)180;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)177;
int var_11 = -1796983918;
int zero = 0;
int var_12 = 107678405;
short var_13 = (short)-28032;
unsigned int var_14 = 2531437077U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

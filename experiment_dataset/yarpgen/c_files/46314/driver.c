#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)106;
int var_9 = -983478183;
unsigned short var_10 = (unsigned short)64606;
int zero = 0;
int var_12 = -832697422;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 11745044006855771863ULL;
int var_15 = -75329486;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

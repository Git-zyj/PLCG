#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7653110784466742782LL;
_Bool var_2 = (_Bool)1;
int var_8 = 44473581;
unsigned short var_13 = (unsigned short)19177;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)47995;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
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

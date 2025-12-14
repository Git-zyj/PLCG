#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 12682069269731223076ULL;
_Bool var_5 = (_Bool)0;
int var_9 = 1533766850;
int var_10 = -1292492745;
unsigned short var_11 = (unsigned short)7182;
unsigned short var_14 = (unsigned short)38953;
unsigned long long int var_16 = 5407456173694941432ULL;
int zero = 0;
unsigned long long int var_17 = 1217015860778764417ULL;
unsigned long long int var_18 = 15887959117257060013ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

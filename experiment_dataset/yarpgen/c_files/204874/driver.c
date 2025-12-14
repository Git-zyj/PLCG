#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32068;
unsigned char var_3 = (unsigned char)57;
int var_12 = -1902740836;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 4202462539U;
_Bool var_17 = (_Bool)0;
int var_18 = 635060089;
long long int var_19 = -2084691249046764433LL;
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

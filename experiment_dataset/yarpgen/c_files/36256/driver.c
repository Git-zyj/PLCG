#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14356398937574417107ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)50;
unsigned long long int var_15 = 10072787340815202565ULL;
unsigned long long int var_16 = 17003582580754908908ULL;
unsigned long long int var_17 = 4496958761455060458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

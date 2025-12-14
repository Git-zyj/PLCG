#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4207709429928529976LL;
unsigned long long int var_3 = 15839266231339485847ULL;
int var_4 = -1482843389;
int var_8 = 174099136;
int var_10 = 1342880186;
long long int var_12 = -7493263475039485554LL;
int zero = 0;
unsigned long long int var_16 = 13322646575099822715ULL;
int var_17 = 286236658;
unsigned int var_18 = 1421266127U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

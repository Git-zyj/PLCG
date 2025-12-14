#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1293375781;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)63;
unsigned long long int var_7 = 4762351851607650077ULL;
unsigned int var_8 = 3548958645U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1049799507U;
int var_18 = -1911665305;
unsigned long long int var_19 = 3475325429056357915ULL;
signed char var_20 = (signed char)(-127 - 1);
int var_21 = 837321991;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

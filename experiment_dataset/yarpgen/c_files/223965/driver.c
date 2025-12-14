#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1249916150;
unsigned char var_1 = (unsigned char)28;
int var_2 = 468009602;
unsigned int var_3 = 4234175865U;
unsigned long long int var_6 = 9977748288001290771ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 2871507900463661839ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12954216487246626934ULL;
long long int var_15 = -3517248299005251910LL;
unsigned char var_16 = (unsigned char)11;
long long int var_17 = -6702028792497601058LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

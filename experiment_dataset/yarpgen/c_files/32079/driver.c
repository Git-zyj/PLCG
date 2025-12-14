#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)70;
unsigned int var_7 = 4137274635U;
unsigned char var_8 = (unsigned char)246;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 5014154024947028313ULL;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)71;
unsigned long long int var_13 = 2070089847436406037ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

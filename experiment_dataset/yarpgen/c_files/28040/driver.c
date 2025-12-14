#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1993531621096585239ULL;
unsigned char var_1 = (unsigned char)32;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)105;
unsigned long long int var_6 = 14605045123431259369ULL;
signed char var_9 = (signed char)71;
int zero = 0;
unsigned long long int var_10 = 15661374423571035235ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-30;
unsigned char var_13 = (unsigned char)41;
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

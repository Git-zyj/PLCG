#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -629356039;
signed char var_3 = (signed char)125;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)65;
unsigned long long int var_9 = 857832152801067086ULL;
int zero = 0;
unsigned long long int var_10 = 17728931412711513189ULL;
int var_11 = -1528403881;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

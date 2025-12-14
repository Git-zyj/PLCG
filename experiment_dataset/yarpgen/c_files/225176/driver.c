#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15151909209344770820ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 12033433850304565240ULL;
unsigned long long int var_6 = 7141974996322814163ULL;
unsigned char var_7 = (unsigned char)46;
unsigned long long int var_9 = 8650921180778640403ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 9052946687043158640LL;
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

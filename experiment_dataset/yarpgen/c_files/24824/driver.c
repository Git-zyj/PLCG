#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
unsigned char var_3 = (unsigned char)190;
unsigned long long int var_4 = 2675583767894715657ULL;
signed char var_6 = (signed char)-100;
signed char var_7 = (signed char)52;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)89;
unsigned long long int var_11 = 4235214954924836428ULL;
unsigned int var_12 = 2257032259U;
signed char var_13 = (signed char)34;
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

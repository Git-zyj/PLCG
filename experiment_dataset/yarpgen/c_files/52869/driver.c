#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
signed char var_5 = (signed char)75;
signed char var_7 = (signed char)61;
unsigned long long int var_12 = 8749130667984253361ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)0;
int var_17 = 850976533;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)177;
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

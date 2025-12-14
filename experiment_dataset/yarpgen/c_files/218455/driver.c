#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1182251864;
int var_3 = -595673178;
unsigned int var_4 = 3093072996U;
unsigned long long int var_6 = 5479844831748225445ULL;
signed char var_11 = (signed char)38;
unsigned int var_14 = 3092936405U;
unsigned int var_18 = 3300183734U;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1871447389;
unsigned long long int var_21 = 1808913308007295500ULL;
void init() {
}

void checksum() {
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

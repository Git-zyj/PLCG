#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4186218470U;
long long int var_6 = 5083567492053511210LL;
unsigned int var_7 = 1746946800U;
signed char var_12 = (signed char)-107;
unsigned char var_14 = (unsigned char)235;
unsigned long long int var_15 = 1930274963234345285ULL;
unsigned long long int var_17 = 24453452057459181ULL;
int zero = 0;
signed char var_19 = (signed char)69;
unsigned char var_20 = (unsigned char)147;
_Bool var_21 = (_Bool)1;
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

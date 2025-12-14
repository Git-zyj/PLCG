#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)23766;
long long int var_8 = 243863285036916052LL;
long long int var_10 = 8536614146688447030LL;
unsigned long long int var_12 = 16284267640842704313ULL;
int var_13 = 534478726;
int zero = 0;
unsigned short var_19 = (unsigned short)43144;
signed char var_20 = (signed char)-7;
int var_21 = -1140936284;
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

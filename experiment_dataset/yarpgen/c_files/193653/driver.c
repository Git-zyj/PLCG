#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10218;
signed char var_2 = (signed char)-107;
unsigned long long int var_3 = 4912530622863737147ULL;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-87;
int var_10 = -1244374556;
int zero = 0;
long long int var_13 = -3069324922236634965LL;
unsigned char var_14 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

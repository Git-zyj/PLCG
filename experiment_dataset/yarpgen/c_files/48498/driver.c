#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)33;
unsigned char var_6 = (unsigned char)104;
unsigned char var_7 = (unsigned char)224;
long long int var_8 = -5354349759086701376LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_15 = 1229766584669445944ULL;
int zero = 0;
signed char var_19 = (signed char)38;
unsigned int var_20 = 943939899U;
signed char var_21 = (signed char)-95;
unsigned int var_22 = 2480984436U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

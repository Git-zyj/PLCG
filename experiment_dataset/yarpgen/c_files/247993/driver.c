#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2882158750U;
unsigned short var_1 = (unsigned short)49842;
signed char var_2 = (signed char)7;
int var_5 = 1059094012;
unsigned long long int var_7 = 8692597644079716707ULL;
unsigned short var_9 = (unsigned short)46718;
int zero = 0;
int var_11 = -593522172;
unsigned long long int var_12 = 3650601523737590683ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 704592313;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

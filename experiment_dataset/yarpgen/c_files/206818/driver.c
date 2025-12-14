#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 9062378760108543440LL;
int var_7 = 1414181778;
unsigned char var_8 = (unsigned char)168;
unsigned long long int var_12 = 3493977344283604659ULL;
unsigned long long int var_14 = 470211863069667798ULL;
int zero = 0;
long long int var_16 = 3628513368467910912LL;
signed char var_17 = (signed char)39;
unsigned int var_18 = 1730711321U;
long long int var_19 = 4749595764964413359LL;
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

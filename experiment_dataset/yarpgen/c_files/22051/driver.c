#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2777076819U;
unsigned char var_6 = (unsigned char)94;
long long int var_11 = 3368138887491400216LL;
unsigned long long int var_12 = 13074859661695198142ULL;
long long int var_13 = 5959578394683654809LL;
signed char var_17 = (signed char)121;
unsigned int var_18 = 391596478U;
int zero = 0;
unsigned long long int var_19 = 8477451154884242069ULL;
short var_20 = (short)-31622;
int var_21 = 27767625;
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

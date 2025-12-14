#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2343557121U;
unsigned short var_4 = (unsigned short)12425;
signed char var_5 = (signed char)-94;
unsigned short var_10 = (unsigned short)774;
long long int var_11 = 9128787262861007014LL;
long long int var_12 = 6758744293026884088LL;
long long int var_14 = -1951205339649674843LL;
int zero = 0;
signed char var_15 = (signed char)-13;
long long int var_16 = -6572110933392168448LL;
unsigned short var_17 = (unsigned short)55407;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

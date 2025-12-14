#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7448558059127315455LL;
long long int var_1 = -1673838575018138270LL;
long long int var_4 = -7267357277691023154LL;
unsigned int var_5 = 2489595995U;
unsigned int var_6 = 817795983U;
unsigned long long int var_7 = 14597763730399144049ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)234;
long long int var_12 = -4077081878306357305LL;
signed char var_13 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

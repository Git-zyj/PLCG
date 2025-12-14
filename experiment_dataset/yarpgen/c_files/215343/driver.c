#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 459533228U;
unsigned long long int var_7 = 1133603725997738526ULL;
signed char var_8 = (signed char)18;
unsigned char var_16 = (unsigned char)142;
int zero = 0;
int var_19 = 1358105887;
int var_20 = 1759125434;
signed char var_21 = (signed char)-95;
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

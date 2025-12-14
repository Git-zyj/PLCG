#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
unsigned long long int var_1 = 10114412497851218715ULL;
unsigned char var_3 = (unsigned char)183;
int var_7 = -1392480400;
unsigned int var_8 = 1883699133U;
int zero = 0;
unsigned int var_15 = 609402996U;
long long int var_16 = -1749492125218158930LL;
signed char var_17 = (signed char)73;
signed char var_18 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 783654149878940941ULL;
int var_3 = 752273492;
signed char var_5 = (signed char)83;
unsigned int var_6 = 1089856731U;
signed char var_10 = (signed char)-63;
unsigned int var_12 = 624087553U;
int zero = 0;
unsigned long long int var_15 = 8010217692663262324ULL;
unsigned int var_16 = 49361619U;
int var_17 = -762708447;
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

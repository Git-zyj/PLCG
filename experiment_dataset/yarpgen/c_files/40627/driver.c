#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6780415262495035211ULL;
long long int var_1 = 8457892841912298290LL;
unsigned int var_2 = 3650109125U;
long long int var_5 = 7717056105264072070LL;
unsigned long long int var_9 = 10711303210268653222ULL;
unsigned short var_13 = (unsigned short)60201;
int zero = 0;
long long int var_14 = 2072247226731342172LL;
unsigned int var_15 = 1974963242U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned long long int var_1 = 7458567618100490997ULL;
unsigned long long int var_4 = 12016272684231368744ULL;
unsigned long long int var_7 = 3833339822051591064ULL;
unsigned char var_8 = (unsigned char)106;
unsigned long long int var_11 = 542944888755560589ULL;
int zero = 0;
unsigned long long int var_18 = 14181046650774418523ULL;
unsigned short var_19 = (unsigned short)2938;
unsigned long long int var_20 = 1222724379180311788ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

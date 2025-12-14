#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38212;
long long int var_2 = 2563310451093324567LL;
unsigned short var_4 = (unsigned short)50215;
long long int var_6 = 3574079013600282112LL;
unsigned long long int var_10 = 6393821655459781990ULL;
int zero = 0;
unsigned int var_12 = 3980960127U;
unsigned short var_13 = (unsigned short)8457;
long long int var_14 = -8163957922375687943LL;
long long int var_15 = 1219713666161535309LL;
unsigned short var_16 = (unsigned short)13272;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

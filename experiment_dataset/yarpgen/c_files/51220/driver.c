#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9126;
unsigned short var_8 = (unsigned short)32892;
int var_10 = 126681153;
unsigned long long int var_11 = 6152945747258995463ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)30121;
long long int var_19 = -5152552833260681541LL;
unsigned long long int var_20 = 435117146526324154ULL;
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

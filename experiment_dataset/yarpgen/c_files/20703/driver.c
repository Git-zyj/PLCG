#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1892099672;
unsigned long long int var_1 = 13628745383184663429ULL;
int var_5 = 834176140;
long long int var_10 = 19355003328997855LL;
unsigned long long int var_14 = 467673713117835938ULL;
long long int var_17 = -2864519037434362753LL;
int zero = 0;
unsigned short var_19 = (unsigned short)38311;
unsigned long long int var_20 = 10720593514516744501ULL;
void init() {
}

void checksum() {
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

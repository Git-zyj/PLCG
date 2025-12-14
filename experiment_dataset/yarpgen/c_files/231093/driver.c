#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 940302401789428150LL;
unsigned long long int var_2 = 9286206928172524934ULL;
unsigned long long int var_3 = 12933306095250227552ULL;
unsigned char var_4 = (unsigned char)54;
unsigned long long int var_6 = 7558554366914069561ULL;
unsigned char var_7 = (unsigned char)48;
unsigned long long int var_10 = 5436015986466247107ULL;
long long int var_11 = -8171808154664722369LL;
int zero = 0;
unsigned short var_14 = (unsigned short)49145;
unsigned long long int var_15 = 15452955533553317463ULL;
unsigned long long int var_16 = 7383868895461367853ULL;
void init() {
}

void checksum() {
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

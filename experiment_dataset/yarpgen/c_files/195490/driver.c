#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11845395437705082807ULL;
long long int var_1 = -351487435201718859LL;
long long int var_2 = -7814511194219168390LL;
_Bool var_3 = (_Bool)1;
long long int var_4 = 4683741607563162776LL;
short var_5 = (short)-23770;
int var_6 = 1585168177;
unsigned char var_7 = (unsigned char)119;
int var_8 = 409919598;
unsigned char var_9 = (unsigned char)144;
int zero = 0;
unsigned int var_10 = 410401348U;
unsigned int var_11 = 1620616079U;
unsigned char var_12 = (unsigned char)154;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

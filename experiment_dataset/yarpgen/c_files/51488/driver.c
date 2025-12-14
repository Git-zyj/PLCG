#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
unsigned long long int var_5 = 4579480094794182580ULL;
long long int var_14 = -8190824314774271206LL;
int zero = 0;
unsigned char var_16 = (unsigned char)183;
unsigned char var_17 = (unsigned char)11;
unsigned short var_18 = (unsigned short)33278;
short var_19 = (short)25411;
unsigned int var_20 = 2387079444U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

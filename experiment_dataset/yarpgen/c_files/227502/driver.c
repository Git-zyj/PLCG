#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17323;
unsigned int var_1 = 3494857524U;
int var_2 = 1943563921;
unsigned char var_3 = (unsigned char)155;
long long int var_4 = 4037851527297424318LL;
unsigned long long int var_5 = 3346886487635602632ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-14706;
unsigned int var_9 = 3139015990U;
long long int var_10 = -6081045491923152993LL;
int zero = 0;
unsigned short var_11 = (unsigned short)34748;
int var_12 = 1804284680;
signed char var_13 = (signed char)-93;
short var_14 = (short)1997;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

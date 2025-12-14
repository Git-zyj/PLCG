#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4084150795U;
int var_3 = 742702908;
long long int var_5 = 1269713610150239653LL;
signed char var_6 = (signed char)46;
int var_7 = -1067382126;
unsigned short var_9 = (unsigned short)25972;
long long int var_10 = 7764168782964482632LL;
long long int var_11 = 3047727247671995369LL;
int var_12 = 128155025;
long long int var_17 = -3943570975099842650LL;
int zero = 0;
unsigned short var_18 = (unsigned short)115;
unsigned long long int var_19 = 14441821128940395375ULL;
unsigned short var_20 = (unsigned short)52380;
long long int var_21 = -3450850358180128844LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

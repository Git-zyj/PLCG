#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12074991860796866217ULL;
unsigned int var_1 = 1068954726U;
unsigned long long int var_4 = 1959409667331659186ULL;
unsigned long long int var_6 = 7114253021565929890ULL;
long long int var_7 = 8656786799677370781LL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_13 = -8201064158525150753LL;
int zero = 0;
unsigned long long int var_14 = 13971320994801173480ULL;
_Bool var_15 = (_Bool)0;
int var_16 = 1695253031;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5354339973418246005ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

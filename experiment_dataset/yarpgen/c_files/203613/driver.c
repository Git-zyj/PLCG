#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6389;
short var_1 = (short)-19556;
unsigned long long int var_2 = 2516857562740000480ULL;
long long int var_6 = -5958312770565642954LL;
unsigned long long int var_7 = 12330468399032441385ULL;
signed char var_9 = (signed char)-117;
unsigned long long int var_11 = 16229480763149566369ULL;
unsigned long long int var_15 = 17207219245609276138ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
unsigned short var_18 = (unsigned short)16082;
unsigned long long int var_19 = 17053448703056228691ULL;
unsigned long long int var_20 = 17495209180962638316ULL;
void init() {
}

void checksum() {
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

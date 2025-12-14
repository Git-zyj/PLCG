#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)199;
int var_2 = -1970337541;
unsigned int var_3 = 2683147406U;
unsigned int var_6 = 128897771U;
unsigned long long int var_8 = 5461992110607744378ULL;
long long int var_10 = -5824685965444740167LL;
int zero = 0;
unsigned long long int var_13 = 860171590669520326ULL;
unsigned short var_14 = (unsigned short)37321;
long long int var_15 = 5523022382491454907LL;
unsigned long long int var_16 = 1320798343992571307ULL;
void init() {
}

void checksum() {
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

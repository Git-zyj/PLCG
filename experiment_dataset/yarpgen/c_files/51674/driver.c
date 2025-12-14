#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4950304573346432510ULL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)175;
unsigned char var_3 = (unsigned char)145;
int var_4 = 478156900;
unsigned int var_6 = 1648120677U;
unsigned long long int var_7 = 7667395005849920777ULL;
long long int var_8 = 9187862353140888256LL;
unsigned char var_9 = (unsigned char)90;
unsigned char var_14 = (unsigned char)155;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 12307324834867862820ULL;
unsigned char var_17 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

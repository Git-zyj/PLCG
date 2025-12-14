#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 787019018;
unsigned short var_1 = (unsigned short)1186;
unsigned int var_2 = 71015194U;
long long int var_3 = -6013908022957928069LL;
int var_4 = 1417720594;
long long int var_5 = -975847976172254018LL;
unsigned char var_6 = (unsigned char)89;
long long int var_9 = 2990569023861192473LL;
unsigned short var_10 = (unsigned short)19399;
signed char var_12 = (signed char)-22;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)117;
unsigned int var_15 = 733170783U;
unsigned long long int var_16 = 9232109185453691702ULL;
unsigned short var_17 = (unsigned short)10806;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

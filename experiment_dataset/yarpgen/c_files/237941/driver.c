#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 623688886004879525ULL;
unsigned long long int var_2 = 4991489882490390256ULL;
unsigned char var_4 = (unsigned char)249;
unsigned short var_5 = (unsigned short)58056;
unsigned char var_7 = (unsigned char)135;
int var_8 = 1388836361;
unsigned long long int var_13 = 6770353334039802221ULL;
unsigned short var_15 = (unsigned short)14561;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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

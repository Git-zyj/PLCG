#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_8 = -993350997;
long long int var_10 = -1632587793908431252LL;
unsigned long long int var_12 = 7016173747685859475ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)62418;
unsigned char var_15 = (unsigned char)5;
unsigned long long int var_16 = 16461725509251962147ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -2065018170;
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

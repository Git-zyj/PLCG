#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3262787746U;
unsigned long long int var_3 = 18122523289214462712ULL;
unsigned short var_4 = (unsigned short)16360;
short var_6 = (short)-6454;
unsigned short var_9 = (unsigned short)24510;
unsigned long long int var_10 = 16965795637057630671ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-5132;
unsigned int var_15 = 3641766133U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5641281405320435652ULL;
signed char var_18 = (signed char)37;
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

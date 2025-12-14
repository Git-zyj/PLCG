#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18940;
long long int var_1 = -2892165871484909968LL;
unsigned int var_2 = 1325848989U;
long long int var_3 = 8966195219893010979LL;
long long int var_4 = -6903120028225629499LL;
long long int var_10 = 7752909754219442913LL;
int var_11 = -2091221355;
long long int var_13 = -1239296022451162667LL;
unsigned long long int var_16 = 14205111037315852993ULL;
unsigned char var_17 = (unsigned char)8;
int zero = 0;
unsigned char var_18 = (unsigned char)220;
long long int var_19 = 1016152564076172726LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

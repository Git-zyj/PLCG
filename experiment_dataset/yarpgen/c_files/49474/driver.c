#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6202968581895163829LL;
long long int var_1 = -7824141305484353598LL;
unsigned char var_2 = (unsigned char)112;
long long int var_3 = -1933303771854796505LL;
short var_5 = (short)-30421;
unsigned long long int var_6 = 4985567796035574376ULL;
long long int var_12 = -2598280018259748774LL;
long long int var_13 = -2055797329671731686LL;
long long int var_14 = 5030417504011382229LL;
int var_15 = 1854041351;
int zero = 0;
int var_19 = -1343831922;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)53429;
short var_22 = (short)13124;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

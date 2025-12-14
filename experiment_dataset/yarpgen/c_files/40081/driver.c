#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6712710860237914200LL;
int var_3 = 2082793537;
long long int var_4 = -4705078128075888410LL;
long long int var_6 = 3935312245355438278LL;
long long int var_7 = -3851540980736569437LL;
int var_8 = 1972542526;
int var_10 = 1628975338;
long long int var_11 = 1223862207272672869LL;
long long int var_12 = -7613811528983908801LL;
long long int var_13 = -70667226788752443LL;
int zero = 0;
long long int var_14 = -3652864308352940111LL;
long long int var_15 = -4599298121312444565LL;
int var_16 = 621074312;
long long int var_17 = 6186852561003505491LL;
long long int var_18 = -1272371363761322420LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4250222889150622844LL;
long long int var_3 = 3973469347998553585LL;
long long int var_4 = 8163658459628621936LL;
long long int var_9 = -1221193691170514484LL;
long long int var_10 = 8043782895301581796LL;
long long int var_13 = -7523332315852346429LL;
long long int var_15 = -3059942399335007711LL;
int zero = 0;
long long int var_16 = -5991263242680369859LL;
long long int var_17 = -5257377737341240247LL;
long long int var_18 = -3312041617843747493LL;
long long int var_19 = 6267371646567848362LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

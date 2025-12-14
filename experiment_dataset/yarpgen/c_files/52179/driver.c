#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7745585866117482489ULL;
int var_1 = 1574112819;
int var_3 = 74750592;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1927676205167230295LL;
int var_8 = 2008150906;
unsigned long long int var_10 = 47119796550119414ULL;
unsigned long long int var_11 = 15461788742760148735ULL;
unsigned short var_12 = (unsigned short)2132;
int zero = 0;
int var_13 = 321645999;
long long int var_14 = 8104945231281390692LL;
int var_15 = -832610594;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

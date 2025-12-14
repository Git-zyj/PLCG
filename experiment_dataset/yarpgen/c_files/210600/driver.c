#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 281103300U;
long long int var_2 = -4571393147879791909LL;
long long int var_3 = -1356849278822492548LL;
long long int var_6 = -3002308429746517604LL;
long long int var_7 = 6632478196642465700LL;
unsigned int var_8 = 1646115825U;
unsigned int var_9 = 1146842158U;
int zero = 0;
long long int var_13 = 7887383912589666312LL;
unsigned int var_14 = 3328542327U;
long long int var_15 = -6606819049501461167LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -7840807841931385329LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)125;
unsigned short var_2 = (unsigned short)61973;
long long int var_5 = -297747178047061658LL;
unsigned int var_8 = 2167457958U;
unsigned int var_11 = 2512364139U;
unsigned short var_13 = (unsigned short)29235;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5850441882983954463ULL;
int zero = 0;
short var_17 = (short)32457;
long long int var_18 = 8852941851280104524LL;
signed char var_19 = (signed char)50;
void init() {
}

void checksum() {
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

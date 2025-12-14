#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1820721294056995712LL;
unsigned long long int var_4 = 18105830596996040974ULL;
long long int var_7 = -584241139271370555LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -2260698751217209141LL;
unsigned long long int var_12 = 4406346641086298086ULL;
unsigned long long int var_13 = 17034289529183049083ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

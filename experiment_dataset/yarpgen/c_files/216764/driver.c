#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6664476518608562333LL;
short var_2 = (short)12356;
short var_3 = (short)23695;
long long int var_4 = 2812204154613546603LL;
signed char var_6 = (signed char)104;
long long int var_8 = -3279187824588358056LL;
signed char var_9 = (signed char)12;
int zero = 0;
long long int var_10 = -5842511318427012005LL;
unsigned int var_11 = 1076080333U;
long long int var_12 = 655579647073032642LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

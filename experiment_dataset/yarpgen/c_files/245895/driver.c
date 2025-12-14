#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2966791736486651824LL;
unsigned long long int var_3 = 1446637251583705425ULL;
unsigned long long int var_4 = 10670467895504265418ULL;
long long int var_9 = 6914950505821972833LL;
int zero = 0;
short var_15 = (short)7657;
short var_16 = (short)8371;
unsigned long long int var_17 = 2353829939795229214ULL;
void init() {
}

void checksum() {
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

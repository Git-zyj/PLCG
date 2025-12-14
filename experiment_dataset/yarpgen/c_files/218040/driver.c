#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -4773684691103414588LL;
unsigned long long int var_5 = 7206509268001549335ULL;
unsigned long long int var_6 = 4202333138684793812ULL;
unsigned short var_8 = (unsigned short)41684;
int var_9 = -1328711973;
unsigned short var_11 = (unsigned short)61010;
short var_12 = (short)-18063;
short var_13 = (short)17593;
int zero = 0;
unsigned short var_14 = (unsigned short)11169;
unsigned long long int var_15 = 7849731324856281485ULL;
signed char var_16 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

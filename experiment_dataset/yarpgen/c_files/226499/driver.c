#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2101823810;
short var_4 = (short)30039;
unsigned char var_5 = (unsigned char)74;
unsigned int var_7 = 1961201131U;
long long int var_8 = -8715230282336165637LL;
unsigned long long int var_10 = 10723448256930838042ULL;
long long int var_11 = 622309453092361064LL;
short var_13 = (short)2510;
int zero = 0;
long long int var_18 = 4396800507729440259LL;
short var_19 = (short)-29466;
unsigned int var_20 = 3484065351U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

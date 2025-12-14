#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)239;
unsigned long long int var_2 = 2985825530387987787ULL;
unsigned long long int var_6 = 17594041142424464930ULL;
signed char var_9 = (signed char)-67;
unsigned long long int var_10 = 14449354393878712593ULL;
int zero = 0;
unsigned long long int var_16 = 8650917728520606957ULL;
unsigned long long int var_17 = 5417511639823146857ULL;
long long int var_18 = -4091908235768433925LL;
int var_19 = -1454910059;
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

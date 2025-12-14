#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40211;
unsigned long long int var_5 = 17026465574184996436ULL;
signed char var_7 = (signed char)-40;
signed char var_10 = (signed char)-107;
int zero = 0;
unsigned long long int var_11 = 15556582647697736033ULL;
long long int var_12 = 6762335732091060165LL;
unsigned int var_13 = 2474003675U;
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

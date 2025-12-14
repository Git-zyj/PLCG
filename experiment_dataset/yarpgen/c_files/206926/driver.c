#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)213;
unsigned short var_13 = (unsigned short)9839;
int zero = 0;
signed char var_17 = (signed char)121;
long long int var_18 = 5630704847621248905LL;
unsigned long long int var_19 = 5111411763071586313ULL;
unsigned int var_20 = 1300460449U;
unsigned short var_21 = (unsigned short)38486;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

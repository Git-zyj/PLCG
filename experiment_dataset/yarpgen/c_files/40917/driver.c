#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15050176137360901534ULL;
long long int var_5 = 9092092634817449810LL;
signed char var_17 = (signed char)-98;
unsigned int var_19 = 1350009937U;
int zero = 0;
unsigned char var_20 = (unsigned char)136;
short var_21 = (short)1710;
unsigned long long int var_22 = 6637948007151355100ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

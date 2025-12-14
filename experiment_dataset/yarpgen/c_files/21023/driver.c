#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4331228596682830764ULL;
unsigned long long int var_4 = 1182602561071252379ULL;
unsigned char var_5 = (unsigned char)91;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)247;
unsigned long long int var_13 = 7005020478012967224ULL;
void init() {
}

void checksum() {
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

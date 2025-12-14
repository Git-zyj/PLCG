#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -410571242;
int var_3 = 793929540;
long long int var_6 = 6378907388266519047LL;
long long int var_7 = -4632796705384201706LL;
int zero = 0;
unsigned short var_10 = (unsigned short)685;
unsigned long long int var_11 = 10452011249892693385ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

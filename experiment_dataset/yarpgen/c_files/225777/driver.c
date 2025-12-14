#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -401695323;
short var_1 = (short)-3816;
_Bool var_2 = (_Bool)1;
long long int var_4 = -7602069730859853761LL;
int zero = 0;
long long int var_14 = 6716832809131443014LL;
unsigned long long int var_15 = 12567730033454246615ULL;
unsigned char var_16 = (unsigned char)143;
long long int var_17 = 32870029991784119LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

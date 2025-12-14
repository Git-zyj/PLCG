#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9153335866959723887LL;
short var_4 = (short)16453;
int zero = 0;
long long int var_19 = 3097284858749347282LL;
unsigned char var_20 = (unsigned char)177;
unsigned long long int var_21 = 2194811512476771150ULL;
void init() {
}

void checksum() {
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

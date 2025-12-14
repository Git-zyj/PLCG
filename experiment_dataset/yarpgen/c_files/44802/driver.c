#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8881823532201581310LL;
unsigned int var_2 = 2223653377U;
short var_3 = (short)20566;
short var_10 = (short)21200;
int var_14 = -514439313;
int zero = 0;
int var_15 = 515546834;
unsigned int var_16 = 1177803551U;
void init() {
}

void checksum() {
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

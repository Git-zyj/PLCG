#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)20853;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)13813;
int zero = 0;
unsigned long long int var_13 = 9391464620258956690ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3994844020U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

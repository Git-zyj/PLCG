#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40358;
unsigned short var_2 = (unsigned short)38539;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3954377499777070812LL;
long long int var_11 = -4306103801550335043LL;
int var_14 = -311847992;
int zero = 0;
short var_16 = (short)25076;
short var_17 = (short)7593;
void init() {
}

void checksum() {
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

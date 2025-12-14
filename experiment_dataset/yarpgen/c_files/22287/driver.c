#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5116192460077439047LL;
short var_4 = (short)-30303;
unsigned int var_7 = 168122754U;
int zero = 0;
unsigned long long int var_13 = 4383887064070078653ULL;
unsigned long long int var_14 = 5839309707669102806ULL;
unsigned int var_15 = 3916064001U;
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

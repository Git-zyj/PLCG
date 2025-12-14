#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1584912983;
int var_7 = 1908316139;
long long int var_9 = 6045347829929892843LL;
long long int var_15 = -1356141133461360512LL;
unsigned int var_17 = 602797161U;
int zero = 0;
unsigned long long int var_18 = 8063116534627230213ULL;
int var_19 = 64247930;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

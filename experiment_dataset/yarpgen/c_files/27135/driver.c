#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8429858218038012064ULL;
unsigned int var_1 = 206218548U;
int var_5 = 279164552;
short var_7 = (short)-3103;
int var_12 = 138616959;
long long int var_16 = 2240205634391234047LL;
int zero = 0;
unsigned long long int var_19 = 6686934939334299104ULL;
short var_20 = (short)25446;
unsigned long long int var_21 = 3539174929809005771ULL;
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

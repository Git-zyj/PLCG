#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)17;
int var_6 = 1492928045;
long long int var_9 = 1257652296662683424LL;
unsigned long long int var_12 = 6970711439353031102ULL;
int zero = 0;
int var_15 = 1962649290;
signed char var_16 = (signed char)-62;
unsigned long long int var_17 = 13371847948889391119ULL;
void init() {
}

void checksum() {
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

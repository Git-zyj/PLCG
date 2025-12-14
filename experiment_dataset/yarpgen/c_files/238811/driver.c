#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2919833151346969214LL;
unsigned long long int var_2 = 3202840606604595466ULL;
short var_3 = (short)-12318;
short var_8 = (short)-14693;
unsigned int var_9 = 3284972370U;
int zero = 0;
int var_10 = -79011024;
long long int var_11 = 8809765017959906458LL;
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

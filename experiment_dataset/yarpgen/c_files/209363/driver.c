#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 32452239955127737LL;
int var_2 = -307004697;
unsigned int var_9 = 674785398U;
unsigned int var_15 = 2431875295U;
unsigned long long int var_19 = 14242444929896593479ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)51963;
unsigned int var_21 = 246252018U;
void init() {
}

void checksum() {
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

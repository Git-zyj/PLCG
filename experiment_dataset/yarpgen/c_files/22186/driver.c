#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4205159871U;
int var_6 = 208842842;
long long int var_9 = 8227232351766057171LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1999938240;
unsigned char var_12 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 581317922;
unsigned short var_8 = (unsigned short)35049;
long long int var_9 = 6493917994770722642LL;
unsigned long long int var_10 = 1063905940254919032ULL;
unsigned char var_11 = (unsigned char)147;
int zero = 0;
unsigned int var_13 = 2653340159U;
long long int var_14 = 6812658037031272243LL;
unsigned int var_15 = 3558800788U;
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

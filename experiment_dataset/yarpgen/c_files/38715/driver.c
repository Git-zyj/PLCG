#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7342546485942765149ULL;
long long int var_9 = 4562062907107376660LL;
int zero = 0;
long long int var_15 = -2382486784857449415LL;
unsigned short var_16 = (unsigned short)25308;
long long int var_17 = 8897707026058351218LL;
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

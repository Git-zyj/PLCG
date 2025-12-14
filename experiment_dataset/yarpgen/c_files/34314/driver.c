#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1924346954;
unsigned long long int var_5 = 977030646216087219ULL;
unsigned long long int var_14 = 1761799457377043141ULL;
int zero = 0;
unsigned long long int var_15 = 14456922136570000472ULL;
unsigned long long int var_16 = 8421752372646141946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

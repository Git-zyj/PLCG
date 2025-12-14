#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13320067392598037511ULL;
int var_2 = -1663593042;
short var_6 = (short)-22486;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 7754986213454135407ULL;
int zero = 0;
short var_12 = (short)-10784;
int var_13 = -1220458308;
unsigned long long int var_14 = 11996985474729099064ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

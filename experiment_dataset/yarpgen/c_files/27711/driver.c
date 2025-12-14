#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11004517177179861441ULL;
long long int var_2 = -6618519795572348547LL;
long long int var_3 = 2174272021026909130LL;
int var_4 = -1700991574;
int var_5 = 524785509;
unsigned int var_8 = 1349999303U;
long long int var_9 = -994916419384648453LL;
unsigned long long int var_10 = 15448309876688192807ULL;
unsigned long long int var_11 = 17317788620591599568ULL;
int zero = 0;
long long int var_14 = 5542886190886046186LL;
unsigned long long int var_15 = 6927627673166894806ULL;
unsigned int var_16 = 1857785898U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

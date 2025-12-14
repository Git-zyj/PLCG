#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9637405294176644384ULL;
unsigned long long int var_1 = 8985012208145732274ULL;
long long int var_3 = -7258542145987904172LL;
unsigned int var_6 = 1645589943U;
unsigned long long int var_8 = 12779846247290009138ULL;
unsigned long long int var_9 = 6236240182341439241ULL;
unsigned long long int var_10 = 14400153690035167442ULL;
unsigned int var_16 = 2405959856U;
int zero = 0;
int var_17 = -1979603602;
unsigned int var_18 = 688233837U;
unsigned long long int var_19 = 9419913028069569831ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

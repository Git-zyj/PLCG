#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1156494547856387486LL;
long long int var_1 = 6214989948939996919LL;
unsigned long long int var_2 = 2196375959090331467ULL;
long long int var_4 = -300850726048130825LL;
unsigned long long int var_7 = 6067238557671530100ULL;
unsigned long long int var_10 = 15859645889585106404ULL;
unsigned long long int var_11 = 12656081024060516933ULL;
int zero = 0;
unsigned long long int var_14 = 6527655337151334540ULL;
unsigned long long int var_15 = 8020575913380245490ULL;
void init() {
}

void checksum() {
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

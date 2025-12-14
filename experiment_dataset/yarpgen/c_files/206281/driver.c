#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6546887417269690290LL;
long long int var_4 = 589707623834850197LL;
unsigned short var_8 = (unsigned short)17395;
short var_13 = (short)16463;
unsigned long long int var_14 = 7291157740797785936ULL;
short var_15 = (short)-28331;
int zero = 0;
unsigned char var_17 = (unsigned char)30;
unsigned long long int var_18 = 5839052748941655185ULL;
short var_19 = (short)10335;
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

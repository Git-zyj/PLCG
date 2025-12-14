#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7852345769479456703LL;
unsigned char var_1 = (unsigned char)67;
short var_2 = (short)-22268;
unsigned long long int var_4 = 4203791836496478134ULL;
long long int var_6 = 2789793424014140801LL;
unsigned long long int var_7 = 14791020143084490608ULL;
unsigned short var_14 = (unsigned short)53755;
int zero = 0;
int var_17 = 2004817344;
long long int var_18 = -1274815723772953596LL;
unsigned char var_19 = (unsigned char)161;
short var_20 = (short)-20747;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

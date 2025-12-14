#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8867057125833112983LL;
unsigned int var_2 = 2287265896U;
unsigned int var_3 = 3975208814U;
unsigned long long int var_5 = 13693429811701903032ULL;
unsigned int var_6 = 3341919553U;
short var_11 = (short)-16460;
int zero = 0;
long long int var_15 = 7431720648973064217LL;
unsigned char var_16 = (unsigned char)217;
signed char var_17 = (signed char)91;
short var_18 = (short)31047;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

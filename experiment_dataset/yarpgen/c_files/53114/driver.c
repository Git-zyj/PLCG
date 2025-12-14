#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)156;
short var_2 = (short)1393;
signed char var_3 = (signed char)-47;
int var_4 = 447714180;
signed char var_8 = (signed char)75;
unsigned char var_10 = (unsigned char)81;
long long int var_11 = -2393875637330883098LL;
short var_12 = (short)-26352;
int zero = 0;
unsigned long long int var_13 = 4394061188590979245ULL;
long long int var_14 = 5218319090783730902LL;
short var_15 = (short)27456;
int var_16 = 2032312577;
short var_17 = (short)-19511;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1353;
short var_2 = (short)9942;
unsigned short var_3 = (unsigned short)45974;
short var_4 = (short)-14272;
int var_5 = -1012887490;
unsigned short var_6 = (unsigned short)29130;
unsigned short var_9 = (unsigned short)13577;
long long int var_10 = 901742636029188898LL;
int zero = 0;
unsigned short var_12 = (unsigned short)53769;
unsigned short var_13 = (unsigned short)42319;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

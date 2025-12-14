#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3702;
unsigned long long int var_1 = 10421220583154376282ULL;
unsigned long long int var_2 = 11844744169724374563ULL;
short var_4 = (short)17262;
unsigned short var_6 = (unsigned short)41360;
long long int var_7 = -265805085008348517LL;
unsigned short var_8 = (unsigned short)40316;
long long int var_9 = 2643839135126996154LL;
int zero = 0;
unsigned short var_10 = (unsigned short)45469;
int var_11 = -103201732;
long long int var_12 = -4424062165707738400LL;
unsigned long long int var_13 = 1312075131616029144ULL;
unsigned long long int var_14 = 9832890346055791509ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31437;
short var_1 = (short)9262;
short var_3 = (short)18980;
unsigned long long int var_4 = 8795726382020691942ULL;
short var_5 = (short)-25393;
unsigned short var_6 = (unsigned short)13258;
short var_7 = (short)2843;
int var_9 = 598801455;
unsigned char var_10 = (unsigned char)215;
short var_11 = (short)-29346;
int zero = 0;
unsigned long long int var_12 = 16817228393691190509ULL;
unsigned char var_13 = (unsigned char)147;
unsigned long long int var_14 = 11393121900033396752ULL;
unsigned short var_15 = (unsigned short)31373;
unsigned long long int var_16 = 10038167768005040495ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5549627312017303855ULL;
short var_3 = (short)4634;
unsigned short var_4 = (unsigned short)28222;
unsigned int var_5 = 2314866440U;
int var_6 = -1825692370;
unsigned int var_11 = 2148176910U;
int zero = 0;
unsigned char var_14 = (unsigned char)113;
unsigned long long int var_15 = 10511553561788276719ULL;
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

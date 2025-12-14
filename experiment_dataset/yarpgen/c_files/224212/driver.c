#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6249;
signed char var_2 = (signed char)9;
short var_3 = (short)-17856;
int var_6 = -1824270046;
long long int var_7 = -5861271636419587152LL;
unsigned int var_9 = 1570442179U;
unsigned long long int var_10 = 14969674057273125908ULL;
unsigned long long int var_11 = 1036407468528494037ULL;
int zero = 0;
int var_13 = -288377676;
unsigned short var_14 = (unsigned short)64593;
int var_15 = 763149927;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

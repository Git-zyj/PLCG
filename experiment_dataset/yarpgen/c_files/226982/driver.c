#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3058;
long long int var_2 = 4973988428483468175LL;
signed char var_4 = (signed char)-53;
unsigned char var_5 = (unsigned char)167;
long long int var_6 = -1639497241521062976LL;
unsigned long long int var_7 = 2566520046438429766ULL;
short var_9 = (short)-20534;
signed char var_10 = (signed char)-1;
int zero = 0;
unsigned int var_12 = 2786246923U;
int var_13 = -300455436;
int var_14 = 680590699;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4049;
int var_3 = -513116163;
unsigned int var_4 = 598521139U;
long long int var_5 = 396387705625659747LL;
unsigned short var_6 = (unsigned short)32022;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-24950;
short var_11 = (short)-25425;
int zero = 0;
unsigned long long int var_12 = 15517125803970641537ULL;
long long int var_13 = 5263793737780103230LL;
unsigned long long int var_14 = 333639406931452705ULL;
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

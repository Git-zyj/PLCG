#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-9716;
unsigned long long int var_8 = 12228293535220081252ULL;
unsigned short var_9 = (unsigned short)59115;
short var_10 = (short)-17958;
unsigned short var_11 = (unsigned short)4528;
unsigned short var_12 = (unsigned short)18638;
unsigned short var_15 = (unsigned short)63242;
int zero = 0;
unsigned short var_16 = (unsigned short)7187;
int var_17 = 1543449980;
unsigned short var_18 = (unsigned short)48569;
short var_19 = (short)3889;
long long int var_20 = -8642004396743988232LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

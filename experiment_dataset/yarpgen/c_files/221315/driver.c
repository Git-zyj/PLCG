#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27434;
unsigned char var_4 = (unsigned char)5;
unsigned int var_5 = 1358635767U;
short var_6 = (short)-9112;
short var_10 = (short)2407;
int zero = 0;
long long int var_13 = 6739640802612401146LL;
int var_14 = -1532707852;
int var_15 = 38998809;
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

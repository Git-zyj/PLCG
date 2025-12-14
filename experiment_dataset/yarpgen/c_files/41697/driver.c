#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4139991961445293362LL;
unsigned short var_4 = (unsigned short)25312;
signed char var_10 = (signed char)7;
long long int var_12 = 7060965233302255609LL;
unsigned int var_13 = 3260863945U;
int zero = 0;
short var_16 = (short)-27905;
unsigned char var_17 = (unsigned char)185;
short var_18 = (short)-32025;
signed char var_19 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

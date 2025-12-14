#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
short var_1 = (short)-27337;
unsigned int var_2 = 2906472969U;
long long int var_4 = 8849053938270488592LL;
short var_5 = (short)-14314;
unsigned int var_7 = 3431040872U;
long long int var_9 = -3062059764085911867LL;
int zero = 0;
short var_13 = (short)-29570;
unsigned short var_14 = (unsigned short)57036;
signed char var_15 = (signed char)-57;
int var_16 = 1927503607;
void init() {
}

void checksum() {
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

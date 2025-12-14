#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39727;
int var_3 = 1760477707;
int var_6 = 1311485562;
unsigned long long int var_11 = 16485917148275179334ULL;
unsigned int var_13 = 1096585581U;
int zero = 0;
unsigned short var_15 = (unsigned short)1300;
unsigned short var_16 = (unsigned short)57495;
long long int var_17 = -7409432149563709865LL;
int var_18 = -323419180;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

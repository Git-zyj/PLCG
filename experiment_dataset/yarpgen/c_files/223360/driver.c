#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8826;
signed char var_1 = (signed char)91;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 4313168616983961028ULL;
unsigned char var_7 = (unsigned char)215;
unsigned long long int var_12 = 10878746105992182629ULL;
short var_13 = (short)-31380;
int var_14 = -877651713;
unsigned long long int var_15 = 8464916703563256994ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -589534389;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 150369384;
long long int var_3 = -8303024244559821049LL;
int var_4 = -640478288;
unsigned long long int var_7 = 4870918686362864327ULL;
unsigned int var_10 = 2929731801U;
short var_11 = (short)6464;
long long int var_12 = 3228589742920452069LL;
unsigned int var_13 = 1971332743U;
unsigned long long int var_14 = 2554090933888339532ULL;
unsigned char var_15 = (unsigned char)134;
unsigned long long int var_18 = 10707119153883703473ULL;
int zero = 0;
int var_19 = 800489027;
short var_20 = (short)23592;
unsigned short var_21 = (unsigned short)45025;
int var_22 = -862992444;
unsigned char var_23 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3996575711363080875ULL;
long long int var_1 = 2806478715187729265LL;
short var_3 = (short)11074;
unsigned short var_4 = (unsigned short)15432;
long long int var_6 = 3396595419737212098LL;
unsigned int var_7 = 552831280U;
int zero = 0;
int var_10 = -1209868019;
int var_11 = 1545006832;
int var_12 = -578412928;
unsigned int var_13 = 3843743744U;
unsigned char var_14 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

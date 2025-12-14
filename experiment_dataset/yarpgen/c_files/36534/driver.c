#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2698851498U;
signed char var_2 = (signed char)-106;
int var_3 = 1537312311;
int var_5 = -693624233;
unsigned long long int var_6 = 5874105736799611361ULL;
unsigned char var_7 = (unsigned char)55;
int var_8 = 1852944876;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)8182;
unsigned short var_12 = (unsigned short)44212;
short var_13 = (short)7402;
int var_14 = -581216354;
int var_15 = -954811764;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

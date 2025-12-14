#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60069;
unsigned int var_1 = 1527437744U;
unsigned short var_6 = (unsigned short)62294;
long long int var_11 = 4677165378236042465LL;
unsigned short var_12 = (unsigned short)61103;
short var_13 = (short)8763;
unsigned int var_14 = 154003334U;
long long int var_15 = -3704179066697523079LL;
long long int var_17 = -473135048352545138LL;
int zero = 0;
unsigned int var_18 = 2739290633U;
unsigned short var_19 = (unsigned short)65191;
unsigned long long int var_20 = 5693950536455543374ULL;
unsigned short var_21 = (unsigned short)23422;
unsigned long long int var_22 = 14317540537604009358ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

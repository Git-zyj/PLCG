#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 783184028U;
unsigned long long int var_1 = 1303105409062401411ULL;
signed char var_2 = (signed char)5;
unsigned long long int var_3 = 5430423607556089132ULL;
unsigned int var_5 = 3377854450U;
long long int var_8 = -4520212038726202383LL;
unsigned short var_9 = (unsigned short)34580;
unsigned long long int var_10 = 17804721651315231435ULL;
long long int var_11 = 2205683218373984759LL;
int zero = 0;
long long int var_12 = -5006734739966752053LL;
long long int var_13 = 8514889504463260185LL;
unsigned short var_14 = (unsigned short)25806;
int var_15 = 1255353458;
unsigned long long int var_16 = 14501856810056852747ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

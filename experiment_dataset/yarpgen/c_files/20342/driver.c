#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8016011208295255415LL;
long long int var_2 = -6806920049349318666LL;
long long int var_3 = -564458784212242393LL;
unsigned char var_6 = (unsigned char)28;
unsigned int var_10 = 1215955220U;
long long int var_12 = 3093020691624481747LL;
long long int var_14 = 6772433421506022396LL;
short var_15 = (short)12781;
int zero = 0;
long long int var_16 = 454677605363389013LL;
long long int var_17 = -3363257525503267353LL;
signed char var_18 = (signed char)8;
short var_19 = (short)22337;
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

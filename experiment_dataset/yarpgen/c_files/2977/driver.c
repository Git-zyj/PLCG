#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-20;
long long int var_3 = -8550577307528427330LL;
short var_7 = (short)-28956;
int var_8 = -1018228045;
long long int var_9 = 8103661710478206269LL;
_Bool var_10 = (_Bool)1;
int var_12 = -1531484087;
int zero = 0;
unsigned long long int var_16 = 6470898144010856503ULL;
unsigned long long int var_17 = 12384697763427277824ULL;
unsigned short var_18 = (unsigned short)24526;
void init() {
}

void checksum() {
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

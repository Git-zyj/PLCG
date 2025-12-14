#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1793922080072784819LL;
long long int var_2 = -8384203645123285212LL;
unsigned long long int var_3 = 15899489523945911119ULL;
int var_4 = 290982473;
unsigned int var_6 = 1810196460U;
unsigned short var_8 = (unsigned short)6074;
int var_11 = 26728451;
unsigned short var_12 = (unsigned short)49246;
int zero = 0;
int var_15 = -842318044;
signed char var_16 = (signed char)-4;
unsigned long long int var_17 = 4017182026137625872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

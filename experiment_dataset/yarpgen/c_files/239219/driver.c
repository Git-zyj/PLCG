#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
int var_3 = 530454399;
unsigned short var_7 = (unsigned short)16130;
unsigned int var_11 = 2721565168U;
unsigned short var_18 = (unsigned short)51355;
long long int var_19 = 2888844337804797381LL;
int zero = 0;
int var_20 = -213606397;
signed char var_21 = (signed char)-126;
signed char var_22 = (signed char)-87;
long long int var_23 = 6998510843002840935LL;
void init() {
}

void checksum() {
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

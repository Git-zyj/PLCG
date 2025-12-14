#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13353;
long long int var_3 = -2198139113535366266LL;
long long int var_5 = -574443020622299046LL;
unsigned int var_6 = 411571545U;
signed char var_8 = (signed char)-124;
short var_10 = (short)-26696;
long long int var_11 = -771314656338719389LL;
unsigned int var_12 = 3518843754U;
long long int var_14 = 8446774375241405439LL;
signed char var_16 = (signed char)-20;
int zero = 0;
long long int var_19 = 3034198836158554662LL;
long long int var_20 = -5664656784181036360LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

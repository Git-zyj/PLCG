#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3790983044295796783LL;
short var_3 = (short)-10798;
long long int var_9 = -5380027382826738779LL;
short var_10 = (short)-10824;
short var_12 = (short)27789;
short var_17 = (short)28045;
int zero = 0;
int var_18 = 1241500372;
unsigned int var_19 = 2007850909U;
unsigned long long int var_20 = 3227130375774296346ULL;
unsigned char var_21 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2193643910U;
long long int var_4 = -3362159887067496945LL;
_Bool var_5 = (_Bool)0;
int var_7 = 735107093;
unsigned int var_9 = 685131490U;
unsigned char var_11 = (unsigned char)228;
int zero = 0;
unsigned int var_15 = 1800780780U;
signed char var_16 = (signed char)-98;
unsigned char var_17 = (unsigned char)144;
short var_18 = (short)19496;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

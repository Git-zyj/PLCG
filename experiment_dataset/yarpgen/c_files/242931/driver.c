#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3333281910U;
unsigned int var_6 = 3432133288U;
signed char var_8 = (signed char)-95;
signed char var_9 = (signed char)-62;
unsigned long long int var_10 = 6664526267630797318ULL;
unsigned short var_12 = (unsigned short)10053;
signed char var_13 = (signed char)70;
long long int var_14 = -2040784003015467672LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)28;
unsigned short var_17 = (unsigned short)26746;
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

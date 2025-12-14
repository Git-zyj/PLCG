#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47163;
unsigned short var_2 = (unsigned short)63764;
unsigned long long int var_3 = 14504867738410620615ULL;
unsigned long long int var_4 = 17317022539366102246ULL;
signed char var_6 = (signed char)-57;
unsigned int var_7 = 3715393140U;
unsigned char var_8 = (unsigned char)10;
unsigned int var_10 = 1542683368U;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -2637880849638203620LL;
unsigned long long int var_14 = 4343902328958405964ULL;
unsigned int var_15 = 2110442079U;
long long int var_16 = 8350774512920282017LL;
void init() {
}

void checksum() {
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

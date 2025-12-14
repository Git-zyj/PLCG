#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7095;
unsigned int var_4 = 2298691823U;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 3694292190U;
long long int var_8 = -2641156411405108844LL;
unsigned char var_9 = (unsigned char)243;
short var_14 = (short)-11742;
int zero = 0;
short var_16 = (short)-5469;
unsigned char var_17 = (unsigned char)17;
long long int var_18 = -1395895415429176293LL;
signed char var_19 = (signed char)-42;
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

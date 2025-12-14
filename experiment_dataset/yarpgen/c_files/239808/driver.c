#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24313;
short var_6 = (short)-21155;
short var_8 = (short)24211;
short var_11 = (short)2566;
long long int var_12 = -2668488282735084356LL;
unsigned int var_15 = 3576588015U;
int zero = 0;
signed char var_18 = (signed char)-54;
unsigned long long int var_19 = 4848428601359368066ULL;
void init() {
}

void checksum() {
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

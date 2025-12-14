#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1123782413;
_Bool var_5 = (_Bool)0;
long long int var_6 = 2205052416902833802LL;
int var_9 = -1423925342;
long long int var_10 = 6071693654479156026LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 4263548447U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4887870024203190638ULL;
short var_16 = (short)-24805;
void init() {
}

void checksum() {
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

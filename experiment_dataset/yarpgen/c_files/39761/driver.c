#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6515974825866177350LL;
_Bool var_2 = (_Bool)1;
short var_6 = (short)786;
unsigned long long int var_7 = 15921756760517762704ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = -5152622317066026577LL;
int var_13 = -81484269;
int zero = 0;
unsigned long long int var_14 = 17849992415537073436ULL;
short var_15 = (short)-14114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6035673156649962516LL;
int var_1 = 2120241117;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)88;
unsigned int var_8 = 1436963496U;
int zero = 0;
long long int var_15 = -7779512785088445486LL;
signed char var_16 = (signed char)-54;
long long int var_17 = -7722344328134459038LL;
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

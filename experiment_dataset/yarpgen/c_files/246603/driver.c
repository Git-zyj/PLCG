#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
signed char var_1 = (signed char)-82;
unsigned int var_3 = 3374171406U;
unsigned char var_5 = (unsigned char)113;
unsigned long long int var_7 = 16800979332534981249ULL;
long long int var_8 = 6143097634778568675LL;
unsigned short var_9 = (unsigned short)46697;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -312496440;
int var_12 = 1319861070;
long long int var_13 = 4551810928958202751LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

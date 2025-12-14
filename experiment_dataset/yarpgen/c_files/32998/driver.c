#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2322786549U;
short var_1 = (short)2255;
long long int var_3 = 2566628723080628788LL;
unsigned int var_4 = 1343876699U;
unsigned char var_7 = (unsigned char)234;
unsigned char var_8 = (unsigned char)202;
signed char var_9 = (signed char)-66;
long long int var_11 = 5612132838973667558LL;
int zero = 0;
long long int var_14 = 6257498105708961034LL;
unsigned short var_15 = (unsigned short)64702;
unsigned long long int var_16 = 15382909076116392167ULL;
short var_17 = (short)2794;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64132;
unsigned short var_4 = (unsigned short)43611;
signed char var_16 = (signed char)-119;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 17830664310018260266ULL;
int var_20 = -1621192404;
signed char var_21 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

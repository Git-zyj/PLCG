#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8971838952956361115ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 1665873509;
unsigned char var_13 = (unsigned char)190;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1950710465U;
unsigned long long int var_20 = 13082321784353171810ULL;
short var_21 = (short)-11807;
void init() {
}

void checksum() {
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

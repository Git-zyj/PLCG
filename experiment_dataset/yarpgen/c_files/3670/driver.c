#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40529;
unsigned int var_4 = 2849921493U;
unsigned char var_8 = (unsigned char)201;
unsigned long long int var_12 = 8441622288296561493ULL;
signed char var_13 = (signed char)-79;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1452923926501166657ULL;
unsigned char var_20 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

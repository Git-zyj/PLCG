#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10692515029771802447ULL;
short var_2 = (short)2377;
_Bool var_8 = (_Bool)1;
short var_9 = (short)2277;
unsigned short var_14 = (unsigned short)23576;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 7353508295077092061ULL;
signed char var_20 = (signed char)-12;
unsigned int var_21 = 356509456U;
short var_22 = (short)-27332;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

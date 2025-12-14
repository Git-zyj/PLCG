#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3889326189625639844LL;
_Bool var_2 = (_Bool)1;
int var_3 = 573458327;
unsigned short var_5 = (unsigned short)48515;
unsigned long long int var_10 = 9795843269891255258ULL;
int zero = 0;
unsigned int var_11 = 3436908447U;
unsigned long long int var_12 = 15849540044059616461ULL;
signed char var_13 = (signed char)-75;
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

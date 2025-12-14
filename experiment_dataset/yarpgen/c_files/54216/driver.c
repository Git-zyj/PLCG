#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -554358827;
unsigned long long int var_2 = 17109233270082701483ULL;
int var_4 = 838577445;
signed char var_7 = (signed char)114;
unsigned char var_11 = (unsigned char)186;
signed char var_12 = (signed char)-95;
unsigned char var_13 = (unsigned char)89;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 6736281353818673491LL;
unsigned int var_18 = 1883395020U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

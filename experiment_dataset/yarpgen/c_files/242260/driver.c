#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
signed char var_2 = (signed char)44;
unsigned short var_4 = (unsigned short)38106;
signed char var_5 = (signed char)-75;
int var_6 = -789306068;
_Bool var_8 = (_Bool)1;
long long int var_11 = -3559490900849960219LL;
unsigned long long int var_13 = 18004846946060923508ULL;
int zero = 0;
int var_16 = -1011352455;
long long int var_17 = 1810711161381167522LL;
signed char var_18 = (signed char)61;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

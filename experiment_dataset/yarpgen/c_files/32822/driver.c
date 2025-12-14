#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)107;
unsigned char var_5 = (unsigned char)164;
long long int var_6 = -5094346692915031010LL;
unsigned char var_11 = (unsigned char)222;
unsigned char var_12 = (unsigned char)238;
int var_14 = 2005541458;
unsigned char var_17 = (unsigned char)148;
int zero = 0;
signed char var_18 = (signed char)-34;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1113702991U;
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

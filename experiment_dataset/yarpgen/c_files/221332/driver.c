#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)36;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 13753297761240420621ULL;
signed char var_11 = (signed char)-127;
unsigned short var_12 = (unsigned short)60179;
unsigned long long int var_13 = 15785745349759942065ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)8;
signed char var_16 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

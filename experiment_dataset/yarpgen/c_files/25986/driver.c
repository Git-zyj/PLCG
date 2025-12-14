#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)49286;
unsigned short var_3 = (unsigned short)26309;
unsigned long long int var_5 = 4315727727829156744ULL;
unsigned short var_6 = (unsigned short)43283;
short var_9 = (short)8496;
long long int var_10 = -784218024526502676LL;
int zero = 0;
int var_12 = -1170918052;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4386855217284750023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

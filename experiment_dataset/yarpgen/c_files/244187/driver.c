#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)80;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 15800049940608376528ULL;
unsigned short var_14 = (unsigned short)35999;
int var_15 = -468423887;
int zero = 0;
unsigned short var_16 = (unsigned short)17034;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7118456961381647454ULL;
int var_19 = -867816328;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

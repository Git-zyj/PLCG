#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 330702277969414046ULL;
int zero = 0;
signed char var_10 = (signed char)43;
unsigned long long int var_11 = 8214363184636579086ULL;
signed char var_12 = (signed char)95;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)29960;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

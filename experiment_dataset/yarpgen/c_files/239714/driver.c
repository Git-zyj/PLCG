#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
signed char var_8 = (signed char)-4;
unsigned long long int var_9 = 11238815811468235700ULL;
int zero = 0;
unsigned long long int var_11 = 13323705902290053339ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15443717586141496220ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13835916113589752398ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

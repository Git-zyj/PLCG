#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31478;
int var_3 = -191619625;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)83;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 8855624843694965891ULL;
signed char var_12 = (signed char)92;
int zero = 0;
unsigned long long int var_13 = 18332687201573132033ULL;
unsigned long long int var_14 = 12646278727729509036ULL;
signed char var_15 = (signed char)-49;
void init() {
}

void checksum() {
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

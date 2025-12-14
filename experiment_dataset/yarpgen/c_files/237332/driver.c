#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5306218703924441980LL;
signed char var_5 = (signed char)34;
signed char var_6 = (signed char)95;
_Bool var_9 = (_Bool)1;
unsigned short var_15 = (unsigned short)41524;
signed char var_16 = (signed char)-83;
int zero = 0;
short var_17 = (short)5772;
signed char var_18 = (signed char)126;
unsigned int var_19 = 1054300632U;
void init() {
}

void checksum() {
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

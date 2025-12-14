#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
int var_4 = -1927332817;
int var_5 = 1013693972;
long long int var_6 = -6663758388829129740LL;
signed char var_9 = (signed char)-70;
signed char var_12 = (signed char)-31;
int zero = 0;
signed char var_14 = (signed char)116;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1046207797620417117LL;
short var_17 = (short)-28384;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

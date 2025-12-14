#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55464;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)4136;
short var_9 = (short)-24216;
_Bool var_11 = (_Bool)1;
int var_15 = 600021759;
unsigned int var_17 = 1481516868U;
int zero = 0;
signed char var_20 = (signed char)-87;
unsigned int var_21 = 3362592912U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

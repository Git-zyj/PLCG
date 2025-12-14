#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-11355;
_Bool var_9 = (_Bool)0;
unsigned int var_16 = 1057237164U;
int zero = 0;
signed char var_18 = (signed char)-49;
long long int var_19 = -646923960187404298LL;
short var_20 = (short)20337;
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

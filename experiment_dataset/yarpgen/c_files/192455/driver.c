#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2005466562559700784LL;
short var_4 = (short)22053;
int var_5 = -1863489240;
int var_6 = 270464982;
int var_7 = 427195591;
unsigned int var_9 = 1575806606U;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)17;
short var_12 = (short)32072;
short var_13 = (short)18447;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12547;
short var_4 = (short)13745;
int var_7 = 1094805976;
unsigned short var_9 = (unsigned short)21295;
long long int var_10 = 8706141594063255470LL;
long long int var_11 = 4350659065039440286LL;
short var_12 = (short)31778;
unsigned long long int var_13 = 14485839354193647688ULL;
int zero = 0;
signed char var_16 = (signed char)-56;
_Bool var_17 = (_Bool)0;
int var_18 = -633337290;
signed char var_19 = (signed char)-42;
int var_20 = -1748575430;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

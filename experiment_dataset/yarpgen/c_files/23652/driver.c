#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7008515619887351040ULL;
short var_2 = (short)-6866;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 850016614U;
_Bool var_7 = (_Bool)1;
long long int var_9 = -1015059207202255250LL;
signed char var_11 = (signed char)-13;
int zero = 0;
unsigned short var_12 = (unsigned short)15351;
short var_13 = (short)1956;
void init() {
}

void checksum() {
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

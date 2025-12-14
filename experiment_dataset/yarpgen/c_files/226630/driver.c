#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4748561868497838990LL;
signed char var_2 = (signed char)-72;
unsigned int var_4 = 1018240213U;
long long int var_5 = -6979000080612927995LL;
unsigned short var_6 = (unsigned short)55535;
signed char var_10 = (signed char)-24;
short var_11 = (short)20558;
short var_13 = (short)32703;
unsigned long long int var_18 = 1428133087599315010ULL;
int zero = 0;
long long int var_20 = 9107873429834855800LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5453332276686422638LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

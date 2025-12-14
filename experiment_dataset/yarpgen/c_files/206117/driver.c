#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
unsigned int var_4 = 4260542754U;
unsigned long long int var_9 = 1159166217502163042ULL;
long long int var_11 = -2733076868413378231LL;
unsigned int var_13 = 1219303972U;
unsigned long long int var_16 = 777093954781885968ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)5;
unsigned long long int var_21 = 3575356033163901121ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

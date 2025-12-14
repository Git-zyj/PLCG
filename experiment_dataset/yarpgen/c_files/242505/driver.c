#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3371524758782117277ULL;
unsigned int var_4 = 1369282183U;
unsigned int var_7 = 3829614348U;
unsigned int var_12 = 2105517912U;
int var_14 = -409602138;
unsigned int var_16 = 1997869598U;
int zero = 0;
unsigned short var_20 = (unsigned short)789;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 2692879484526992970ULL;
signed char var_23 = (signed char)-42;
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

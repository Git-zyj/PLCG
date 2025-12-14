#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2094543306448196633LL;
long long int var_2 = -6280090009426063440LL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-44;
unsigned int var_7 = 3342838612U;
unsigned short var_8 = (unsigned short)15188;
int zero = 0;
unsigned short var_13 = (unsigned short)61342;
signed char var_14 = (signed char)123;
long long int var_15 = 942157726127354748LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

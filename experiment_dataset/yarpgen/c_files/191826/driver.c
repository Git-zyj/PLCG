#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7259795768674828410LL;
unsigned short var_1 = (unsigned short)32854;
int var_5 = -559979880;
_Bool var_12 = (_Bool)0;
unsigned int var_18 = 1467899017U;
int zero = 0;
signed char var_20 = (signed char)34;
signed char var_21 = (signed char)-49;
signed char var_22 = (signed char)(-127 - 1);
long long int var_23 = 680318495965559913LL;
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

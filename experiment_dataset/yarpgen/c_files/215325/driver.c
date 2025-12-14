#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4733284937604910946LL;
long long int var_2 = 1923426001755316584LL;
unsigned short var_4 = (unsigned short)30513;
unsigned short var_5 = (unsigned short)42720;
long long int var_7 = 1662072494988421256LL;
long long int var_8 = 2986219312773313420LL;
_Bool var_16 = (_Bool)0;
int var_18 = -1223351894;
int zero = 0;
unsigned int var_19 = 1787583986U;
unsigned long long int var_20 = 8556654646730926444ULL;
void init() {
}

void checksum() {
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

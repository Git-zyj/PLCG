#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)102;
unsigned short var_3 = (unsigned short)56438;
_Bool var_6 = (_Bool)1;
signed char var_12 = (signed char)-11;
int zero = 0;
signed char var_18 = (signed char)62;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)22821;
unsigned short var_21 = (unsigned short)57931;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

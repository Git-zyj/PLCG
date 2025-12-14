#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned long long int var_1 = 17861953619655496634ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-35;
unsigned long long int var_5 = 10655567043929432211ULL;
long long int var_7 = -7386178891206496235LL;
unsigned long long int var_8 = 504120859190549761ULL;
unsigned short var_11 = (unsigned short)28199;
int zero = 0;
unsigned long long int var_13 = 10265599654414265791ULL;
short var_14 = (short)4503;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

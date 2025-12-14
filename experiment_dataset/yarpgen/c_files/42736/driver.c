#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13343;
unsigned int var_3 = 3735647991U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11276600454969234214ULL;
unsigned int var_7 = 4210676651U;
unsigned short var_8 = (unsigned short)55626;
signed char var_12 = (signed char)4;
int zero = 0;
signed char var_18 = (signed char)-84;
signed char var_19 = (signed char)68;
unsigned char var_20 = (unsigned char)134;
unsigned int var_21 = 2635758249U;
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

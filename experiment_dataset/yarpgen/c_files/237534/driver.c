#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28668;
unsigned short var_2 = (unsigned short)33193;
signed char var_4 = (signed char)-90;
signed char var_6 = (signed char)89;
signed char var_7 = (signed char)-51;
signed char var_8 = (signed char)-71;
signed char var_10 = (signed char)15;
unsigned short var_17 = (unsigned short)14670;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)45;
short var_21 = (short)-26451;
signed char var_22 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

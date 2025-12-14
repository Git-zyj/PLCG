#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
signed char var_4 = (signed char)-50;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)207;
signed char var_17 = (signed char)78;
unsigned int var_18 = 721721079U;
int zero = 0;
long long int var_19 = 2588441526926259141LL;
unsigned short var_20 = (unsigned short)6123;
signed char var_21 = (signed char)-71;
short var_22 = (short)3887;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15984222339953748961ULL;
unsigned short var_4 = (unsigned short)41347;
signed char var_5 = (signed char)93;
unsigned int var_6 = 435367157U;
unsigned short var_7 = (unsigned short)61395;
signed char var_9 = (signed char)110;
unsigned short var_11 = (unsigned short)39976;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_18 = (short)-29398;
signed char var_19 = (signed char)-19;
long long int var_20 = -7219670130821605298LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

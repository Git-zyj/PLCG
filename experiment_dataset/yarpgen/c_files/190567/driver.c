#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4073323311U;
_Bool var_4 = (_Bool)1;
short var_6 = (short)20318;
unsigned char var_7 = (unsigned char)115;
signed char var_9 = (signed char)-114;
short var_14 = (short)-24538;
int zero = 0;
short var_19 = (short)12860;
signed char var_20 = (signed char)-16;
unsigned int var_21 = 3806832574U;
void init() {
}

void checksum() {
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

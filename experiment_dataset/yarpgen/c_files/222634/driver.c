#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-777;
unsigned char var_1 = (unsigned char)68;
short var_3 = (short)30581;
unsigned int var_5 = 3838522737U;
signed char var_6 = (signed char)-97;
signed char var_7 = (signed char)-94;
long long int var_8 = 8530367628299967148LL;
int var_9 = 1337867267;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)30606;
unsigned short var_13 = (unsigned short)6516;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

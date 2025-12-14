#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_2 = (short)-8476;
short var_9 = (short)-11588;
unsigned char var_12 = (unsigned char)179;
long long int var_13 = 5206159066615164190LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6011346612516251173LL;
short var_22 = (short)22455;
void init() {
}

void checksum() {
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

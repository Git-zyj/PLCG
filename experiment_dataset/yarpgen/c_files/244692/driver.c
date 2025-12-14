#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
short var_3 = (short)-3482;
signed char var_9 = (signed char)-97;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -399100589442492890LL;
unsigned short var_14 = (unsigned short)17379;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15220;
_Bool var_5 = (_Bool)0;
int var_7 = 553235838;
unsigned char var_8 = (unsigned char)105;
int zero = 0;
short var_13 = (short)7752;
signed char var_14 = (signed char)89;
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

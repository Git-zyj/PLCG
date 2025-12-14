#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15470;
long long int var_2 = 7398497970564034814LL;
short var_3 = (short)18659;
signed char var_6 = (signed char)-53;
int var_9 = -75076033;
short var_12 = (short)-14548;
int zero = 0;
unsigned long long int var_15 = 17044526195329944136ULL;
long long int var_16 = 590106940135841088LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

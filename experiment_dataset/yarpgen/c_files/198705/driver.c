#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3875637765087040014LL;
long long int var_3 = 4736868877822214671LL;
unsigned char var_6 = (unsigned char)110;
unsigned char var_8 = (unsigned char)9;
unsigned char var_9 = (unsigned char)240;
short var_13 = (short)-28190;
short var_15 = (short)20970;
int zero = 0;
unsigned short var_16 = (unsigned short)64549;
long long int var_17 = 2276215319163824887LL;
signed char var_18 = (signed char)92;
unsigned char var_19 = (unsigned char)57;
unsigned char var_20 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9021610551169036081LL;
unsigned int var_6 = 4176579056U;
_Bool var_8 = (_Bool)0;
long long int var_10 = 150462520322558893LL;
short var_11 = (short)-30998;
signed char var_13 = (signed char)-67;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)224;
unsigned short var_22 = (unsigned short)61808;
unsigned short var_23 = (unsigned short)24187;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

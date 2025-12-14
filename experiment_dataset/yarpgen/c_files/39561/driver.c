#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9521;
long long int var_1 = 3686600346052033593LL;
unsigned short var_3 = (unsigned short)65022;
signed char var_6 = (signed char)119;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)9621;
unsigned char var_21 = (unsigned char)28;
signed char var_22 = (signed char)76;
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

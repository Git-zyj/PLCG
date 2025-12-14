#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)220;
unsigned char var_3 = (unsigned char)64;
long long int var_10 = 202686789910530042LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)10235;
short var_13 = (short)6302;
void init() {
}

void checksum() {
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

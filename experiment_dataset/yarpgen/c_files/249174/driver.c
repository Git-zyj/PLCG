#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61209;
_Bool var_3 = (_Bool)0;
short var_5 = (short)12402;
short var_9 = (short)-6224;
unsigned short var_12 = (unsigned short)57593;
int zero = 0;
short var_14 = (short)-11322;
short var_15 = (short)-1721;
short var_16 = (short)-20622;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

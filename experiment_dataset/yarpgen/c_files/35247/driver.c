#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1230547584U;
long long int var_4 = -7872500585268994210LL;
unsigned int var_5 = 724876015U;
unsigned long long int var_7 = 10154912105452537244ULL;
unsigned char var_13 = (unsigned char)82;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)10126;
unsigned long long int var_16 = 9933683292310512781ULL;
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

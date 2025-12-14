#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1583956749;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-57;
unsigned char var_10 = (unsigned char)202;
int zero = 0;
unsigned long long int var_15 = 2548633201921945054ULL;
short var_16 = (short)9842;
short var_17 = (short)32456;
long long int var_18 = -651554085873710465LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

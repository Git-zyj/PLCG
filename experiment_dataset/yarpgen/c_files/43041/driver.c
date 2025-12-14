#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -253792513623695188LL;
int var_4 = -482951854;
int var_6 = -1931268085;
int var_7 = -1043834345;
unsigned short var_8 = (unsigned short)13068;
signed char var_11 = (signed char)-43;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -2770238306297879548LL;
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

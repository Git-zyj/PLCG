#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
unsigned char var_7 = (unsigned char)138;
long long int var_10 = 979491339483363652LL;
short var_13 = (short)19044;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -578959811;
unsigned short var_21 = (unsigned short)37733;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

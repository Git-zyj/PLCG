#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)3823;
short var_15 = (short)-31921;
int zero = 0;
int var_19 = -870104479;
short var_20 = (short)-9026;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 7769991113966963765ULL;
int var_23 = 291997915;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

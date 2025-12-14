#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1067882347;
long long int var_4 = -2961952726312370130LL;
int var_8 = 1580228343;
unsigned char var_16 = (unsigned char)205;
int var_18 = 380542882;
int zero = 0;
unsigned int var_20 = 652858648U;
short var_21 = (short)21052;
_Bool var_22 = (_Bool)1;
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

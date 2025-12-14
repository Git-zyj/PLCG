#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
unsigned int var_4 = 3544738203U;
signed char var_5 = (signed char)92;
unsigned char var_10 = (unsigned char)207;
signed char var_12 = (signed char)-91;
unsigned int var_13 = 388728011U;
int zero = 0;
long long int var_20 = -555481218336345664LL;
signed char var_21 = (signed char)-45;
signed char var_22 = (signed char)7;
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

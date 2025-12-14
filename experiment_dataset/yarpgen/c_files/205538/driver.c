#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-100;
unsigned int var_4 = 1141630426U;
long long int var_6 = -8024158786997553700LL;
int var_8 = 1023887795;
long long int var_18 = -6815594565072746807LL;
int zero = 0;
unsigned char var_19 = (unsigned char)117;
unsigned short var_20 = (unsigned short)30968;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

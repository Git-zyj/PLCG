#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
long long int var_3 = 864257302688378088LL;
unsigned int var_4 = 3723766648U;
unsigned short var_5 = (unsigned short)744;
short var_8 = (short)-11442;
unsigned long long int var_11 = 13059913114925266331ULL;
short var_12 = (short)5073;
unsigned long long int var_13 = 18340714203388999801ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)247;
unsigned short var_21 = (unsigned short)13343;
void init() {
}

void checksum() {
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

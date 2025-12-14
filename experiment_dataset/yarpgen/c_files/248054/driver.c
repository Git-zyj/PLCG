#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)32;
unsigned long long int var_8 = 12993924887668534731ULL;
short var_12 = (short)-23073;
int zero = 0;
unsigned short var_17 = (unsigned short)35271;
signed char var_18 = (signed char)44;
long long int var_19 = 5176552827487597328LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

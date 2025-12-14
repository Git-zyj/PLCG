#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)98;
unsigned int var_5 = 2019197221U;
int var_6 = 757697222;
short var_13 = (short)16048;
signed char var_16 = (signed char)82;
int zero = 0;
signed char var_20 = (signed char)-98;
long long int var_21 = -4740679234613920282LL;
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

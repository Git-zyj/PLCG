#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
long long int var_2 = 4448584962975330410LL;
int var_4 = 753926554;
unsigned int var_5 = 2392631357U;
long long int var_7 = -7426911431706566331LL;
short var_8 = (short)15273;
signed char var_9 = (signed char)117;
short var_11 = (short)-19108;
unsigned char var_15 = (unsigned char)26;
int zero = 0;
signed char var_16 = (signed char)-29;
signed char var_17 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

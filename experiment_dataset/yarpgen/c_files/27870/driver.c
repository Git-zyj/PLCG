#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 646550061U;
unsigned int var_9 = 2843988956U;
signed char var_13 = (signed char)-93;
unsigned int var_16 = 1202423835U;
short var_18 = (short)19663;
int zero = 0;
unsigned char var_19 = (unsigned char)197;
unsigned long long int var_20 = 4258128362757546958ULL;
unsigned int var_21 = 3634531081U;
signed char var_22 = (signed char)-3;
unsigned char var_23 = (unsigned char)224;
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

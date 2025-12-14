#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11458;
short var_2 = (short)-898;
unsigned char var_3 = (unsigned char)154;
short var_4 = (short)-15115;
short var_8 = (short)-31454;
unsigned char var_9 = (unsigned char)96;
long long int var_11 = 5489158735623813784LL;
unsigned char var_12 = (unsigned char)163;
int zero = 0;
signed char var_13 = (signed char)125;
signed char var_14 = (signed char)123;
long long int var_15 = 390124570220930421LL;
long long int var_16 = 7883215311564020400LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

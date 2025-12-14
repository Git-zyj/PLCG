#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25861;
long long int var_7 = 3525106579589859260LL;
signed char var_9 = (signed char)-14;
unsigned int var_10 = 1604436422U;
int var_12 = 1661950270;
int var_14 = 799289652;
int zero = 0;
unsigned int var_18 = 3860674679U;
unsigned char var_19 = (unsigned char)184;
long long int var_20 = -3127439667328849170LL;
unsigned int var_21 = 2723797718U;
unsigned int var_22 = 2540311887U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

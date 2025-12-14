#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1683521071;
unsigned short var_2 = (unsigned short)3945;
unsigned int var_3 = 967412263U;
unsigned char var_5 = (unsigned char)255;
signed char var_6 = (signed char)18;
unsigned short var_7 = (unsigned short)20128;
unsigned short var_9 = (unsigned short)614;
long long int var_10 = -6216765216571294572LL;
short var_12 = (short)25822;
unsigned char var_13 = (unsigned char)126;
unsigned char var_14 = (unsigned char)217;
unsigned short var_16 = (unsigned short)36189;
int var_18 = -1815526713;
signed char var_19 = (signed char)49;
int zero = 0;
short var_20 = (short)8601;
unsigned int var_21 = 2261298852U;
signed char var_22 = (signed char)13;
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

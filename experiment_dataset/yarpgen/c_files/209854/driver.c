#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -608713580;
unsigned char var_3 = (unsigned char)63;
short var_5 = (short)4958;
unsigned char var_9 = (unsigned char)85;
unsigned char var_13 = (unsigned char)20;
signed char var_15 = (signed char)-56;
unsigned char var_17 = (unsigned char)206;
int zero = 0;
long long int var_20 = -8704129435984150257LL;
unsigned int var_21 = 3711594270U;
unsigned int var_22 = 270397114U;
short var_23 = (short)18550;
unsigned int var_24 = 3496414961U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
unsigned long long int var_4 = 10493978633365032642ULL;
unsigned char var_5 = (unsigned char)64;
long long int var_6 = 3037151800869736083LL;
unsigned short var_7 = (unsigned short)32271;
signed char var_10 = (signed char)-124;
int zero = 0;
long long int var_12 = 8533341634212783144LL;
unsigned short var_13 = (unsigned short)44963;
long long int var_14 = -2963561650505298552LL;
long long int var_15 = -290576530959889072LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

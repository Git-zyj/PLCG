#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
signed char var_1 = (signed char)-87;
unsigned short var_7 = (unsigned short)12892;
unsigned char var_9 = (unsigned char)82;
long long int var_12 = -8746822942306556628LL;
long long int var_13 = -3788935698461570990LL;
int zero = 0;
unsigned int var_14 = 1415421529U;
long long int var_15 = -3242922882554650809LL;
signed char var_16 = (signed char)-116;
unsigned char var_17 = (unsigned char)206;
unsigned int var_18 = 1989776320U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

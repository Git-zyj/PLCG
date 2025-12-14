#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 95908426U;
short var_3 = (short)32077;
unsigned char var_4 = (unsigned char)181;
short var_9 = (short)-22974;
signed char var_10 = (signed char)123;
int var_11 = -611941812;
unsigned short var_14 = (unsigned short)25314;
int zero = 0;
unsigned int var_20 = 845959999U;
signed char var_21 = (signed char)-26;
unsigned char var_22 = (unsigned char)33;
int var_23 = 251481638;
long long int var_24 = -4265130848306463567LL;
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

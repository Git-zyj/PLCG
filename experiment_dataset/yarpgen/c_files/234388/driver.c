#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 450787867U;
unsigned short var_4 = (unsigned short)23392;
unsigned int var_5 = 325407559U;
unsigned char var_6 = (unsigned char)246;
short var_9 = (short)8540;
unsigned int var_15 = 201327739U;
unsigned int var_18 = 361854419U;
int zero = 0;
short var_19 = (short)3284;
long long int var_20 = -5237452569353241700LL;
signed char var_21 = (signed char)-57;
short var_22 = (short)-24631;
unsigned char var_23 = (unsigned char)3;
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

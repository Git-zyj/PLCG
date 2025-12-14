#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
unsigned short var_5 = (unsigned short)22959;
signed char var_8 = (signed char)20;
unsigned short var_11 = (unsigned short)45814;
unsigned int var_15 = 3426564060U;
int zero = 0;
unsigned short var_20 = (unsigned short)7856;
unsigned short var_21 = (unsigned short)17803;
unsigned short var_22 = (unsigned short)4704;
unsigned int var_23 = 3636995589U;
void init() {
}

void checksum() {
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

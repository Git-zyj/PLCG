#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-12;
long long int var_3 = -5021426158844352876LL;
unsigned short var_4 = (unsigned short)15480;
int var_8 = 788756213;
long long int var_9 = -4194517492686961575LL;
signed char var_11 = (signed char)126;
short var_12 = (short)-20532;
short var_13 = (short)-918;
short var_14 = (short)-27399;
signed char var_15 = (signed char)-29;
int zero = 0;
long long int var_16 = 4586396684541660227LL;
short var_17 = (short)6100;
unsigned int var_18 = 2559946010U;
unsigned int var_19 = 566540480U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

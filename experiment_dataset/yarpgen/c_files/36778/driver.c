#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13887;
unsigned char var_4 = (unsigned char)138;
signed char var_5 = (signed char)0;
signed char var_6 = (signed char)-46;
short var_7 = (short)-11078;
signed char var_9 = (signed char)-35;
unsigned int var_10 = 1792018650U;
int zero = 0;
signed char var_12 = (signed char)-14;
unsigned short var_13 = (unsigned short)62395;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

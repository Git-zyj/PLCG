#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)39;
unsigned int var_3 = 3554545417U;
unsigned short var_8 = (unsigned short)32993;
signed char var_10 = (signed char)-113;
unsigned char var_11 = (unsigned char)157;
int zero = 0;
short var_12 = (short)25859;
signed char var_13 = (signed char)98;
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

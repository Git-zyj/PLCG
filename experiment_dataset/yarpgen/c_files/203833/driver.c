#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)188;
short var_4 = (short)17074;
unsigned long long int var_7 = 3783269992792387237ULL;
int var_10 = 600933080;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_18 = (short)-13916;
signed char var_19 = (signed char)95;
signed char var_20 = (signed char)67;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

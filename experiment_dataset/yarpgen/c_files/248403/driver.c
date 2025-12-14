#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned short var_2 = (unsigned short)34946;
unsigned char var_4 = (unsigned char)179;
short var_5 = (short)26797;
unsigned short var_6 = (unsigned short)37565;
short var_8 = (short)19375;
int zero = 0;
int var_12 = 315265018;
signed char var_13 = (signed char)-112;
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

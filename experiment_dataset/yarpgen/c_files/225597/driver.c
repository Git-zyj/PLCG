#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)116;
int var_4 = 1695568060;
unsigned short var_5 = (unsigned short)35994;
int var_6 = -1107063110;
short var_9 = (short)28755;
signed char var_13 = (signed char)-118;
int zero = 0;
unsigned short var_15 = (unsigned short)7041;
int var_16 = -1400688857;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

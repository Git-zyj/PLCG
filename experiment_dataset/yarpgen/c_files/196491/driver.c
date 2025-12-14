#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16588789011756094190ULL;
short var_3 = (short)18542;
short var_4 = (short)6168;
unsigned short var_5 = (unsigned short)9462;
signed char var_6 = (signed char)28;
signed char var_7 = (signed char)108;
signed char var_9 = (signed char)-60;
int zero = 0;
signed char var_10 = (signed char)42;
signed char var_11 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

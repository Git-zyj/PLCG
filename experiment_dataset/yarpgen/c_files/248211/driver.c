#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4732952499946491995LL;
unsigned long long int var_5 = 7045609058917184233ULL;
signed char var_8 = (signed char)-73;
short var_16 = (short)-28166;
int zero = 0;
unsigned short var_18 = (unsigned short)37951;
unsigned short var_19 = (unsigned short)25153;
void init() {
}

void checksum() {
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

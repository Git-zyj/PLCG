#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13275230891284938619ULL;
unsigned char var_7 = (unsigned char)70;
int var_9 = -530126991;
unsigned short var_16 = (unsigned short)32739;
unsigned int var_18 = 3686065225U;
int zero = 0;
long long int var_19 = 8930627723225369375LL;
short var_20 = (short)-13052;
signed char var_21 = (signed char)-47;
short var_22 = (short)6696;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

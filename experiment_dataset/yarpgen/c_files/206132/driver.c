#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32026;
short var_2 = (short)28731;
unsigned short var_4 = (unsigned short)39025;
unsigned int var_5 = 555128650U;
signed char var_6 = (signed char)-74;
long long int var_7 = 5132601987708139046LL;
unsigned short var_11 = (unsigned short)54404;
int zero = 0;
signed char var_12 = (signed char)-126;
signed char var_13 = (signed char)-57;
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

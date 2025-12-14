#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
signed char var_2 = (signed char)-47;
unsigned char var_11 = (unsigned char)27;
short var_15 = (short)7897;
int zero = 0;
long long int var_19 = -951413454408519863LL;
long long int var_20 = -9148268123196103860LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)57;
unsigned int var_5 = 1525035559U;
signed char var_9 = (signed char)-87;
unsigned short var_11 = (unsigned short)58785;
int zero = 0;
unsigned short var_19 = (unsigned short)29923;
short var_20 = (short)-9661;
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

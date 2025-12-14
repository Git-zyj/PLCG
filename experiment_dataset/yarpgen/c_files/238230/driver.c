#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64661;
unsigned short var_3 = (unsigned short)25089;
signed char var_14 = (signed char)-111;
unsigned char var_16 = (unsigned char)196;
int zero = 0;
signed char var_20 = (signed char)-71;
unsigned char var_21 = (unsigned char)127;
short var_22 = (short)-29297;
void init() {
}

void checksum() {
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

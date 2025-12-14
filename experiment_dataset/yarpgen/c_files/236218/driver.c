#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11425;
signed char var_5 = (signed char)-37;
unsigned short var_7 = (unsigned short)1508;
int var_10 = -2143475785;
int zero = 0;
unsigned short var_12 = (unsigned short)53052;
signed char var_13 = (signed char)-76;
int var_14 = -453788042;
unsigned short var_15 = (unsigned short)40951;
unsigned char var_16 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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

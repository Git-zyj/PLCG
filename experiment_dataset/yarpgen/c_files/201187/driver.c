#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3921387930U;
unsigned int var_5 = 822837714U;
signed char var_8 = (signed char)-101;
unsigned int var_10 = 949033109U;
unsigned short var_11 = (unsigned short)21831;
unsigned int var_14 = 2705303478U;
int zero = 0;
unsigned short var_18 = (unsigned short)62367;
signed char var_19 = (signed char)97;
unsigned char var_20 = (unsigned char)57;
signed char var_21 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

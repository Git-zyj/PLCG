#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
short var_9 = (short)-16953;
signed char var_12 = (signed char)-97;
signed char var_16 = (signed char)83;
int zero = 0;
signed char var_18 = (signed char)110;
unsigned long long int var_19 = 1628679518456429579ULL;
unsigned char var_20 = (unsigned char)17;
unsigned char var_21 = (unsigned char)95;
unsigned long long int var_22 = 4830390217050728337ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

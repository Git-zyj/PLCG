#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41493;
signed char var_4 = (signed char)1;
signed char var_5 = (signed char)-57;
long long int var_7 = -2027605339992292632LL;
int var_8 = -1487840633;
unsigned char var_10 = (unsigned char)196;
unsigned short var_11 = (unsigned short)1491;
int zero = 0;
signed char var_12 = (signed char)-93;
unsigned char var_13 = (unsigned char)133;
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

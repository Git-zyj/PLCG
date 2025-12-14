#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)45906;
unsigned char var_9 = (unsigned char)177;
signed char var_11 = (signed char)67;
unsigned int var_12 = 676954890U;
int zero = 0;
unsigned short var_19 = (unsigned short)45912;
signed char var_20 = (signed char)-40;
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

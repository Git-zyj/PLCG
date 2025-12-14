#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5087444587225440874LL;
signed char var_12 = (signed char)-83;
unsigned short var_13 = (unsigned short)10266;
int zero = 0;
signed char var_17 = (signed char)12;
unsigned char var_18 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

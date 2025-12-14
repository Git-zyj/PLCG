#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
signed char var_3 = (signed char)-7;
unsigned short var_7 = (unsigned short)37835;
unsigned short var_9 = (unsigned short)28091;
int zero = 0;
signed char var_11 = (signed char)105;
int var_12 = 1385715059;
unsigned short var_13 = (unsigned short)61672;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

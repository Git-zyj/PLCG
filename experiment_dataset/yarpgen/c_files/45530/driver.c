#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)169;
unsigned short var_9 = (unsigned short)40497;
unsigned int var_15 = 1208034390U;
int var_18 = 1036167559;
int zero = 0;
unsigned int var_19 = 691976574U;
unsigned short var_20 = (unsigned short)38500;
short var_21 = (short)3206;
void init() {
}

void checksum() {
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

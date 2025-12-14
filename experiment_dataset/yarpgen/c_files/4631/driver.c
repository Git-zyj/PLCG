#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 95182479;
short var_7 = (short)6179;
signed char var_9 = (signed char)-47;
signed char var_10 = (signed char)-56;
unsigned short var_13 = (unsigned short)64037;
int zero = 0;
short var_14 = (short)-25938;
unsigned char var_15 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

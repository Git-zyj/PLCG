#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17882;
int var_5 = 1635170180;
int var_9 = -1385295572;
int zero = 0;
short var_12 = (short)9359;
unsigned char var_13 = (unsigned char)8;
unsigned int var_14 = 2185347842U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

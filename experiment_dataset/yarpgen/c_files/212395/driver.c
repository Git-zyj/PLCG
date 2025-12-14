#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21231;
short var_1 = (short)6371;
unsigned short var_2 = (unsigned short)20572;
short var_4 = (short)-20405;
short var_6 = (short)19416;
short var_9 = (short)-27176;
unsigned int var_12 = 187309392U;
int zero = 0;
unsigned short var_14 = (unsigned short)50289;
short var_15 = (short)-20260;
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

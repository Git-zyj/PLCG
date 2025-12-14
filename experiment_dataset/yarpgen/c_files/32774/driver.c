#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25550;
long long int var_2 = 8773038241683263254LL;
short var_4 = (short)-2841;
long long int var_7 = 526188977895472719LL;
unsigned char var_11 = (unsigned char)242;
int zero = 0;
unsigned int var_16 = 3328840391U;
short var_17 = (short)-16657;
long long int var_18 = -608682025675782052LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

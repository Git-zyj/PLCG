#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)25539;
long long int var_6 = 1240180015292266155LL;
short var_9 = (short)-8249;
long long int var_11 = 1765144034793909323LL;
int var_12 = -394841634;
int zero = 0;
unsigned char var_16 = (unsigned char)102;
long long int var_17 = -6888439808508972531LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2695533227U;
unsigned char var_4 = (unsigned char)235;
unsigned char var_9 = (unsigned char)46;
int var_11 = -210304649;
int zero = 0;
long long int var_18 = -4880008960449868729LL;
short var_19 = (short)31376;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

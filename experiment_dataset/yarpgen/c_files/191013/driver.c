#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)64;
signed char var_4 = (signed char)-80;
short var_7 = (short)3445;
unsigned long long int var_8 = 18119332849108588888ULL;
int var_10 = 1712382458;
int zero = 0;
int var_12 = 1771451007;
long long int var_13 = -4399652936349754285LL;
short var_14 = (short)6791;
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

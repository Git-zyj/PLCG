#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1430815279;
unsigned int var_4 = 2052355761U;
long long int var_5 = -5981552350241568952LL;
unsigned char var_12 = (unsigned char)57;
int zero = 0;
short var_20 = (short)8673;
unsigned short var_21 = (unsigned short)16720;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)92;
long long int var_13 = -6795074868899374890LL;
unsigned short var_16 = (unsigned short)11714;
unsigned long long int var_17 = 872542834988645137ULL;
unsigned short var_18 = (unsigned short)48851;
int zero = 0;
int var_19 = -321482644;
signed char var_20 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

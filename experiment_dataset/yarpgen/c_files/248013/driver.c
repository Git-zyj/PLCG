#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-22;
long long int var_2 = 8871486069436591044LL;
unsigned char var_4 = (unsigned char)191;
unsigned short var_5 = (unsigned short)6576;
long long int var_6 = 7912381176985093107LL;
short var_9 = (short)12899;
int zero = 0;
long long int var_10 = 919700100968108637LL;
int var_11 = -122207087;
int var_12 = 407529308;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

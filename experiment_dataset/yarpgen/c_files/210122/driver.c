#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27401;
long long int var_2 = -8452911230733734994LL;
long long int var_6 = 1811023850664033855LL;
unsigned short var_8 = (unsigned short)45675;
int zero = 0;
unsigned short var_10 = (unsigned short)50918;
short var_11 = (short)-9013;
unsigned long long int var_12 = 13508791886384710055ULL;
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

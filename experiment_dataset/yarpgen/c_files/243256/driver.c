#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31450;
unsigned short var_2 = (unsigned short)14810;
short var_4 = (short)-30615;
long long int var_11 = -174668513159073588LL;
signed char var_17 = (signed char)-114;
int zero = 0;
long long int var_20 = -4699316065862936300LL;
short var_21 = (short)-24205;
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

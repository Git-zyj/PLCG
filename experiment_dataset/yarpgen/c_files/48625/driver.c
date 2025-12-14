#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 174658141U;
unsigned long long int var_12 = 5503752864097770828ULL;
unsigned long long int var_14 = 10446982130177093994ULL;
int zero = 0;
short var_18 = (short)23243;
unsigned long long int var_19 = 5707637939858213240ULL;
unsigned char var_20 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

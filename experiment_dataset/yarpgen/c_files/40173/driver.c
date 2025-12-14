#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8867;
long long int var_2 = -7464958698749389449LL;
signed char var_5 = (signed char)52;
long long int var_8 = -8132581797486967361LL;
signed char var_9 = (signed char)-96;
int zero = 0;
unsigned short var_14 = (unsigned short)3348;
short var_15 = (short)-3546;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

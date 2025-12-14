#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1647644544502445653ULL;
unsigned short var_1 = (unsigned short)37590;
signed char var_6 = (signed char)65;
signed char var_7 = (signed char)-64;
signed char var_14 = (signed char)-31;
short var_18 = (short)10901;
int zero = 0;
int var_20 = -1730010538;
unsigned long long int var_21 = 6323831841619077567ULL;
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

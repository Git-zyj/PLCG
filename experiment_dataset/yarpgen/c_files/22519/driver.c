#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9928;
unsigned short var_2 = (unsigned short)56589;
unsigned short var_3 = (unsigned short)34121;
long long int var_7 = 5795626240547316555LL;
signed char var_8 = (signed char)-37;
int zero = 0;
int var_11 = 437960546;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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

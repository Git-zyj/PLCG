#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34740;
signed char var_4 = (signed char)-22;
unsigned short var_6 = (unsigned short)62121;
unsigned char var_8 = (unsigned char)117;
int var_11 = 1132644195;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3041684522U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

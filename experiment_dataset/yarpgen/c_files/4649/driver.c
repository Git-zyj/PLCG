#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-44;
signed char var_2 = (signed char)-58;
unsigned short var_4 = (unsigned short)891;
int var_7 = 494240849;
unsigned char var_9 = (unsigned char)12;
unsigned short var_10 = (unsigned short)31621;
int zero = 0;
unsigned char var_11 = (unsigned char)243;
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

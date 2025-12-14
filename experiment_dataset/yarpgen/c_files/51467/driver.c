#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-110;
unsigned int var_4 = 793136212U;
unsigned short var_5 = (unsigned short)22775;
unsigned short var_7 = (unsigned short)2552;
short var_8 = (short)17914;
int zero = 0;
unsigned int var_11 = 3202922242U;
long long int var_12 = -7019410532325840325LL;
unsigned int var_13 = 810498400U;
unsigned char var_14 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

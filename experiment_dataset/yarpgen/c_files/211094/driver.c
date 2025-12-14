#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-15926;
signed char var_9 = (signed char)-53;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 2961315962937393944ULL;
unsigned short var_19 = (unsigned short)4859;
unsigned short var_20 = (unsigned short)29190;
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

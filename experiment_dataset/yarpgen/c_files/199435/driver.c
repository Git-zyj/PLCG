#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8998;
signed char var_2 = (signed char)-106;
short var_6 = (short)-18560;
unsigned long long int var_7 = 8621434983704240267ULL;
signed char var_8 = (signed char)-99;
long long int var_9 = -4279181346149544519LL;
unsigned short var_10 = (unsigned short)49704;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)16125;
short var_14 = (short)10502;
void init() {
}

void checksum() {
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

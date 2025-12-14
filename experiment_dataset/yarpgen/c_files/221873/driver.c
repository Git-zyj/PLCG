#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4170993298316265012LL;
unsigned char var_1 = (unsigned char)171;
int var_2 = 1002954367;
unsigned char var_6 = (unsigned char)121;
_Bool var_7 = (_Bool)0;
short var_9 = (short)3532;
signed char var_10 = (signed char)-13;
int zero = 0;
int var_11 = 1013067035;
signed char var_12 = (signed char)-99;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31268;
short var_1 = (short)11597;
signed char var_2 = (signed char)-37;
signed char var_3 = (signed char)-22;
long long int var_4 = -2001764885846787853LL;
long long int var_5 = 339828911119368613LL;
unsigned short var_7 = (unsigned short)24465;
short var_9 = (short)-9118;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)64714;
int zero = 0;
unsigned short var_16 = (unsigned short)58785;
signed char var_17 = (signed char)-37;
short var_18 = (short)8043;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

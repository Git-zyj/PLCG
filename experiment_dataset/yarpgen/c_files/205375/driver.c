#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
signed char var_2 = (signed char)-86;
signed char var_6 = (signed char)2;
signed char var_7 = (signed char)-49;
long long int var_8 = -7541365039812126256LL;
unsigned char var_9 = (unsigned char)76;
unsigned short var_10 = (unsigned short)58828;
unsigned short var_11 = (unsigned short)21490;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
short var_14 = (short)-11523;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

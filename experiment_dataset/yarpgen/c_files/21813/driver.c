#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7177465604875259879LL;
signed char var_1 = (signed char)90;
short var_2 = (short)-31156;
unsigned char var_4 = (unsigned char)189;
signed char var_6 = (signed char)-111;
signed char var_7 = (signed char)110;
unsigned short var_12 = (unsigned short)52;
unsigned short var_17 = (unsigned short)27297;
int zero = 0;
unsigned short var_19 = (unsigned short)23071;
unsigned char var_20 = (unsigned char)171;
unsigned long long int var_21 = 14053302663041195789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

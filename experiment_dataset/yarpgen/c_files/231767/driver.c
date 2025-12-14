#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 318917859;
unsigned char var_5 = (unsigned char)173;
unsigned char var_7 = (unsigned char)230;
signed char var_11 = (signed char)-110;
short var_12 = (short)28299;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
int var_18 = -1026373610;
int var_19 = 1534233312;
short var_20 = (short)-1146;
unsigned char var_21 = (unsigned char)191;
long long int var_22 = 3093781509397796107LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

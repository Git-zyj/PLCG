#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 849128296;
int var_2 = 153325674;
signed char var_5 = (signed char)-11;
unsigned char var_6 = (unsigned char)85;
short var_7 = (short)5078;
int var_8 = 1677482587;
long long int var_10 = -7197577116385293879LL;
int zero = 0;
int var_12 = 1533503493;
unsigned short var_13 = (unsigned short)12504;
signed char var_14 = (signed char)83;
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

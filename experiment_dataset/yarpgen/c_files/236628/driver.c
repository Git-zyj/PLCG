#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
int var_4 = -819798521;
long long int var_6 = 6174682906801098097LL;
signed char var_8 = (signed char)8;
signed char var_9 = (signed char)54;
signed char var_10 = (signed char)-120;
short var_13 = (short)19250;
int zero = 0;
unsigned short var_14 = (unsigned short)40680;
unsigned char var_15 = (unsigned char)185;
long long int var_16 = 9105357538368522765LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

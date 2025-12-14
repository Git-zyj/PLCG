#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8714921616814524393LL;
unsigned short var_1 = (unsigned short)36040;
unsigned short var_5 = (unsigned short)33747;
int var_14 = 971841412;
int zero = 0;
unsigned short var_19 = (unsigned short)17006;
unsigned short var_20 = (unsigned short)54287;
long long int var_21 = 3730954662086342752LL;
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

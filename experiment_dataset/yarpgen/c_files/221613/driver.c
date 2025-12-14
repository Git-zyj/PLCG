#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5086;
short var_3 = (short)8331;
short var_4 = (short)14765;
long long int var_6 = 3877760740545204155LL;
long long int var_14 = 7428752449144388993LL;
short var_15 = (short)26171;
short var_16 = (short)22788;
int zero = 0;
long long int var_19 = 3101031076994265988LL;
long long int var_20 = 6092068065555538428LL;
long long int var_21 = 5669239560415371693LL;
long long int var_22 = 4154163699454694275LL;
void init() {
}

void checksum() {
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

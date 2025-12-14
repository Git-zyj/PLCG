#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_9 = (unsigned short)17333;
unsigned short var_12 = (unsigned short)43076;
unsigned char var_18 = (unsigned char)104;
int zero = 0;
unsigned char var_19 = (unsigned char)144;
long long int var_20 = 5506497544635243808LL;
short var_21 = (short)26210;
int var_22 = 1041920101;
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

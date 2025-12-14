#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1087523921198940194LL;
unsigned char var_2 = (unsigned char)197;
unsigned short var_3 = (unsigned short)38896;
unsigned short var_5 = (unsigned short)34709;
short var_10 = (short)8588;
int var_12 = 1866087636;
int zero = 0;
long long int var_13 = 2283453499325506187LL;
unsigned short var_14 = (unsigned short)31937;
unsigned short var_15 = (unsigned short)16987;
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

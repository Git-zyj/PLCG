#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)747;
unsigned char var_1 = (unsigned char)143;
int var_2 = -1686261917;
long long int var_3 = 4764174294334460321LL;
unsigned long long int var_4 = 4082708455307868570ULL;
unsigned char var_5 = (unsigned char)150;
short var_6 = (short)-10248;
int var_9 = -1228335240;
int zero = 0;
int var_10 = -2135047492;
short var_11 = (short)-31739;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

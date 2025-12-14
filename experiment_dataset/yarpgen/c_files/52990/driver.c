#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21353;
unsigned char var_1 = (unsigned char)211;
unsigned char var_4 = (unsigned char)218;
short var_14 = (short)-29390;
int zero = 0;
unsigned short var_18 = (unsigned short)10929;
long long int var_19 = -4686985828306264479LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

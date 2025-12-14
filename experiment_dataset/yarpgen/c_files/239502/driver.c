#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)25743;
unsigned int var_12 = 1068574953U;
unsigned char var_17 = (unsigned char)161;
int zero = 0;
unsigned char var_19 = (unsigned char)96;
unsigned short var_20 = (unsigned short)34701;
unsigned char var_21 = (unsigned char)121;
unsigned int var_22 = 189450490U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 289361228;
unsigned int var_3 = 322818654U;
unsigned short var_8 = (unsigned short)3687;
unsigned char var_11 = (unsigned char)169;
int zero = 0;
unsigned short var_14 = (unsigned short)31121;
long long int var_15 = -3867500978963293101LL;
void init() {
}

void checksum() {
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

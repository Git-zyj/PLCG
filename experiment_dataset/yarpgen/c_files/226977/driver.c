#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
long long int var_2 = 7140625564942148343LL;
unsigned char var_4 = (unsigned char)40;
unsigned short var_5 = (unsigned short)10690;
short var_7 = (short)-15422;
int zero = 0;
signed char var_11 = (signed char)-55;
long long int var_12 = -9204885431396197725LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2762634621U;
signed char var_8 = (signed char)82;
unsigned short var_9 = (unsigned short)9091;
unsigned short var_12 = (unsigned short)22830;
int zero = 0;
signed char var_15 = (signed char)-61;
unsigned short var_16 = (unsigned short)34085;
long long int var_17 = 315985820575098591LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

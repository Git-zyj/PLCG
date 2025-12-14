#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3410356986628534588LL;
short var_2 = (short)-4412;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 2444752787287723716ULL;
unsigned long long int var_8 = 7430085206233255009ULL;
unsigned char var_10 = (unsigned char)79;
int zero = 0;
short var_16 = (short)-21448;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1885794844U;
unsigned char var_6 = (unsigned char)68;
int zero = 0;
short var_20 = (short)-5771;
unsigned long long int var_21 = 6056389100804299333ULL;
long long int var_22 = -6146793577170294759LL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46813;
long long int var_1 = -1358814408425257632LL;
int var_2 = 2005105174;
unsigned char var_6 = (unsigned char)44;
short var_9 = (short)-8191;
int zero = 0;
unsigned short var_12 = (unsigned short)44996;
long long int var_13 = -2101827739704826036LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

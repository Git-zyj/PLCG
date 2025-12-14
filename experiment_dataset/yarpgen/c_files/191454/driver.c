#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8030907582620991447LL;
short var_1 = (short)-5606;
short var_2 = (short)-1737;
unsigned char var_5 = (unsigned char)14;
int var_9 = -670275960;
int zero = 0;
int var_11 = -555793850;
int var_12 = 786699848;
long long int var_13 = 5091040526981664545LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

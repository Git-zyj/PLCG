#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)427;
short var_1 = (short)-6666;
int var_6 = 431584503;
unsigned short var_8 = (unsigned short)1995;
unsigned long long int var_9 = 5590664021349663413ULL;
int zero = 0;
signed char var_10 = (signed char)52;
unsigned short var_11 = (unsigned short)55463;
int var_12 = 351056957;
signed char var_13 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

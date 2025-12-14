#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6619487118319166024ULL;
short var_2 = (short)-21512;
short var_6 = (short)17441;
short var_9 = (short)2652;
int zero = 0;
int var_13 = -1996963617;
unsigned long long int var_14 = 6362113614320207054ULL;
unsigned char var_15 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

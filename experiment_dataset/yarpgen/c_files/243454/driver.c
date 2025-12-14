#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 267435898;
short var_13 = (short)-11706;
unsigned int var_15 = 2010646024U;
unsigned int var_19 = 52163426U;
int zero = 0;
long long int var_20 = -7936695767833894124LL;
unsigned short var_21 = (unsigned short)61749;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

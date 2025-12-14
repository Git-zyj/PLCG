#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1774358323;
int var_5 = -258568658;
unsigned char var_7 = (unsigned char)195;
unsigned char var_8 = (unsigned char)32;
unsigned char var_9 = (unsigned char)239;
int zero = 0;
short var_13 = (short)18970;
int var_14 = 2109786348;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

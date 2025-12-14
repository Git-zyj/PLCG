#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1513880817;
signed char var_2 = (signed char)-120;
long long int var_8 = -5406354322747071922LL;
short var_14 = (short)-15367;
int zero = 0;
unsigned char var_15 = (unsigned char)51;
signed char var_16 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

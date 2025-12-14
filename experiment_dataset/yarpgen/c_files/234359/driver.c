#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7501;
short var_5 = (short)-19102;
short var_10 = (short)-4511;
int zero = 0;
short var_20 = (short)7340;
unsigned short var_21 = (unsigned short)11880;
int var_22 = -314955739;
unsigned long long int var_23 = 4313331367102463633ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 694651501;
long long int var_10 = 6912993213467169149LL;
short var_18 = (short)3369;
int zero = 0;
unsigned long long int var_19 = 3923212788356704391ULL;
unsigned short var_20 = (unsigned short)22568;
short var_21 = (short)-4481;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

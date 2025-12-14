#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7308903635928770205ULL;
unsigned short var_5 = (unsigned short)49860;
int var_9 = -1302506078;
long long int var_13 = -5125298465269509432LL;
int zero = 0;
short var_19 = (short)-28207;
unsigned int var_20 = 640844854U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

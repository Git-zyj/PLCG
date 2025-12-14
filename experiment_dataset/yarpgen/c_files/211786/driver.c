#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3059076420U;
unsigned long long int var_8 = 14720911867086680707ULL;
unsigned short var_10 = (unsigned short)31071;
unsigned long long int var_13 = 6176726895694200116ULL;
unsigned short var_14 = (unsigned short)34902;
int zero = 0;
short var_18 = (short)-9600;
long long int var_19 = 5735517147485037948LL;
unsigned char var_20 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3639620967918706244ULL;
short var_2 = (short)9997;
unsigned short var_3 = (unsigned short)58264;
unsigned short var_5 = (unsigned short)40895;
short var_6 = (short)-8919;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)63224;
int zero = 0;
unsigned char var_10 = (unsigned char)95;
unsigned long long int var_11 = 5803791361058139898ULL;
unsigned char var_12 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

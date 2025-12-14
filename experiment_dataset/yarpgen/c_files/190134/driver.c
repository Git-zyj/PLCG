#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8190699216450385559LL;
unsigned short var_3 = (unsigned short)57669;
signed char var_6 = (signed char)-71;
int var_7 = 1960383554;
unsigned long long int var_8 = 6257149831089977453ULL;
long long int var_9 = -5879290599922184544LL;
unsigned short var_12 = (unsigned short)793;
int zero = 0;
long long int var_13 = -2695762750504162650LL;
unsigned short var_14 = (unsigned short)22575;
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

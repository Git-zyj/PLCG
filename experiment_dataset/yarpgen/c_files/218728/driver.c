#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31236;
unsigned long long int var_2 = 10297566515667430981ULL;
int var_5 = 1577868911;
unsigned short var_11 = (unsigned short)7892;
int zero = 0;
long long int var_12 = -2260731223417901023LL;
short var_13 = (short)15325;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

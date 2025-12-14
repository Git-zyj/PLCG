#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10535069305711690442ULL;
unsigned short var_15 = (unsigned short)53795;
int zero = 0;
unsigned short var_17 = (unsigned short)38879;
signed char var_18 = (signed char)-50;
short var_19 = (short)32578;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

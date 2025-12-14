#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 408688651;
unsigned long long int var_1 = 5148965394010192065ULL;
long long int var_4 = -6067351526246239560LL;
short var_5 = (short)4167;
int var_8 = -84524497;
unsigned char var_9 = (unsigned char)216;
int zero = 0;
unsigned long long int var_10 = 1392895964065913963ULL;
signed char var_11 = (signed char)125;
unsigned long long int var_12 = 2285077883236928865ULL;
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

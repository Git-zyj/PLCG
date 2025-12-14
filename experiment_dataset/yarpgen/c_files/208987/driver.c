#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5571247038777580031LL;
unsigned short var_2 = (unsigned short)7596;
int var_5 = -63225638;
signed char var_10 = (signed char)-11;
unsigned char var_12 = (unsigned char)209;
short var_13 = (short)-29698;
unsigned short var_16 = (unsigned short)7933;
int zero = 0;
unsigned long long int var_17 = 7108420560652905254ULL;
unsigned short var_18 = (unsigned short)23418;
short var_19 = (short)28404;
short var_20 = (short)-7986;
unsigned long long int var_21 = 15633584114365832349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

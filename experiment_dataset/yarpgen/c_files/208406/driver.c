#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38424;
unsigned int var_2 = 3751814412U;
unsigned char var_5 = (unsigned char)2;
unsigned long long int var_7 = 2758957203341016717ULL;
int zero = 0;
signed char var_10 = (signed char)-84;
long long int var_11 = 4016236975021140349LL;
unsigned char var_12 = (unsigned char)225;
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

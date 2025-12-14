#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9174663144504813058ULL;
unsigned int var_10 = 1821520275U;
unsigned char var_11 = (unsigned char)206;
int var_12 = 936344655;
long long int var_14 = 2439061341072244116LL;
int zero = 0;
unsigned int var_19 = 2813389334U;
unsigned short var_20 = (unsigned short)46361;
unsigned char var_21 = (unsigned char)240;
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

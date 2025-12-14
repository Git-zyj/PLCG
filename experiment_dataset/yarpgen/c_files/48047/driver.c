#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2119792539;
unsigned long long int var_4 = 10326983626096324732ULL;
unsigned short var_5 = (unsigned short)12462;
unsigned char var_11 = (unsigned char)246;
long long int var_13 = -6197954442912093526LL;
unsigned short var_15 = (unsigned short)54878;
unsigned short var_16 = (unsigned short)25927;
int zero = 0;
long long int var_17 = -747951183994718974LL;
unsigned long long int var_18 = 15955331167621913177ULL;
unsigned char var_19 = (unsigned char)76;
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

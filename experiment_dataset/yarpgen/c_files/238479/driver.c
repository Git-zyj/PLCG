#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2071932802189446071LL;
unsigned char var_1 = (unsigned char)230;
unsigned long long int var_2 = 9095959990057566679ULL;
long long int var_4 = -2346532831907939028LL;
unsigned short var_7 = (unsigned short)16212;
short var_8 = (short)18080;
long long int var_14 = 1600516623876883016LL;
long long int var_16 = -1517129726053552284LL;
int zero = 0;
unsigned char var_17 = (unsigned char)197;
long long int var_18 = 3809141617012828144LL;
unsigned char var_19 = (unsigned char)195;
unsigned char var_20 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

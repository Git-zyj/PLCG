#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 434546112U;
short var_3 = (short)-8882;
unsigned long long int var_9 = 2716652018205812752ULL;
unsigned char var_10 = (unsigned char)89;
signed char var_11 = (signed char)-67;
long long int var_15 = -5624915146923096964LL;
int var_18 = 987274325;
int zero = 0;
int var_19 = 1793993178;
unsigned int var_20 = 1342714897U;
void init() {
}

void checksum() {
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

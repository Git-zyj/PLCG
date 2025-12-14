#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-76;
unsigned int var_7 = 2969274986U;
signed char var_10 = (signed char)-115;
long long int var_13 = -7221239349180145103LL;
int zero = 0;
unsigned short var_15 = (unsigned short)47195;
unsigned char var_16 = (unsigned char)77;
unsigned long long int var_17 = 6622612112577613183ULL;
unsigned char var_18 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

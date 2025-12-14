#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
unsigned int var_1 = 4078239847U;
long long int var_3 = 7801699843199253245LL;
unsigned long long int var_5 = 9863097568540659426ULL;
signed char var_8 = (signed char)38;
unsigned short var_10 = (unsigned short)24704;
long long int var_11 = 5455740826682831733LL;
unsigned char var_12 = (unsigned char)107;
int zero = 0;
unsigned long long int var_15 = 1681497452580945952ULL;
unsigned short var_16 = (unsigned short)31567;
short var_17 = (short)12309;
short var_18 = (short)-12036;
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

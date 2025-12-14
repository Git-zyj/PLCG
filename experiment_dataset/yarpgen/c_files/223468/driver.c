#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2788752302714511539LL;
unsigned short var_1 = (unsigned short)25830;
signed char var_2 = (signed char)-107;
unsigned char var_6 = (unsigned char)186;
unsigned long long int var_7 = 15332988681213037229ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-9;
short var_11 = (short)-19900;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

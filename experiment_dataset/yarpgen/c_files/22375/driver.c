#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned char var_2 = (unsigned char)247;
short var_3 = (short)1763;
short var_4 = (short)5591;
long long int var_5 = 7721429186552037045LL;
unsigned int var_6 = 3333975132U;
unsigned long long int var_7 = 15792092664764590316ULL;
short var_8 = (short)-2445;
long long int var_10 = -7550270042865449045LL;
short var_11 = (short)22016;
short var_12 = (short)-12085;
long long int var_13 = -4773253020900065652LL;
unsigned char var_14 = (unsigned char)176;
unsigned long long int var_15 = 335196069910745694ULL;
unsigned long long int var_16 = 5691443927227655827ULL;
short var_17 = (short)21997;
int zero = 0;
short var_20 = (short)-24896;
long long int var_21 = 5357920725091826149LL;
void init() {
}

void checksum() {
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

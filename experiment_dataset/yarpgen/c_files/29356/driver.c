#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9333;
short var_3 = (short)27989;
short var_6 = (short)-26318;
short var_7 = (short)11458;
short var_8 = (short)-9312;
long long int var_9 = 2355324117077336890LL;
short var_10 = (short)-16498;
int zero = 0;
short var_11 = (short)10780;
long long int var_12 = 1334007608873225946LL;
void init() {
}

void checksum() {
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

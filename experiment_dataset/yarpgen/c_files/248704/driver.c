#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15420;
unsigned long long int var_3 = 4973619398665123119ULL;
unsigned short var_4 = (unsigned short)19355;
long long int var_5 = -2374538438552471304LL;
long long int var_6 = 134628070860821489LL;
int zero = 0;
unsigned long long int var_12 = 6823816057019773114ULL;
short var_13 = (short)-18567;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

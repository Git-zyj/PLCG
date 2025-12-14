#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14181943522824256471ULL;
long long int var_1 = -5712905812241244713LL;
long long int var_8 = -4329737959963988410LL;
unsigned short var_14 = (unsigned short)54413;
int zero = 0;
short var_17 = (short)-16123;
unsigned long long int var_18 = 5116344775502230452ULL;
void init() {
}

void checksum() {
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

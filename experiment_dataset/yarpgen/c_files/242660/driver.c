#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6239867752849088789LL;
unsigned int var_4 = 882921171U;
unsigned short var_7 = (unsigned short)56773;
short var_10 = (short)-19475;
short var_11 = (short)-12344;
int zero = 0;
int var_12 = -213630017;
long long int var_13 = 7867907262111970575LL;
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

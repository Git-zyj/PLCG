#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
short var_2 = (short)-8426;
short var_3 = (short)31921;
signed char var_4 = (signed char)-90;
long long int var_10 = 8599489657659085061LL;
int zero = 0;
unsigned long long int var_12 = 11078643083604079306ULL;
unsigned long long int var_13 = 15022318416730974667ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26564;
short var_3 = (short)19237;
int var_5 = -514740330;
unsigned long long int var_6 = 10824139624638768001ULL;
signed char var_7 = (signed char)-7;
unsigned int var_8 = 451030727U;
int zero = 0;
long long int var_11 = -8290658411138808910LL;
short var_12 = (short)-7209;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
unsigned short var_3 = (unsigned short)58786;
short var_4 = (short)9374;
long long int var_5 = 2982938203641306427LL;
unsigned long long int var_6 = 10451336954167663157ULL;
short var_7 = (short)-486;
unsigned short var_8 = (unsigned short)33257;
unsigned short var_10 = (unsigned short)32615;
int zero = 0;
unsigned long long int var_12 = 14912831820083415738ULL;
signed char var_13 = (signed char)-16;
unsigned long long int var_14 = 3540049519105310619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

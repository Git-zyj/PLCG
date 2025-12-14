#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1456;
unsigned short var_5 = (unsigned short)49687;
unsigned int var_8 = 592281161U;
signed char var_11 = (signed char)-95;
unsigned long long int var_12 = 5165665245269035790ULL;
int zero = 0;
unsigned long long int var_13 = 2014837054308794600ULL;
long long int var_14 = -6834938739183635760LL;
void init() {
}

void checksum() {
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

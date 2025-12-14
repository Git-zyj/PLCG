#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)11;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-3;
unsigned long long int var_9 = 7115778713491850795ULL;
unsigned char var_10 = (unsigned char)24;
long long int var_13 = 402078803196646076LL;
int var_14 = -339396041;
int zero = 0;
unsigned long long int var_19 = 16513901127399878253ULL;
signed char var_20 = (signed char)33;
short var_21 = (short)-1595;
int var_22 = 1237393517;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

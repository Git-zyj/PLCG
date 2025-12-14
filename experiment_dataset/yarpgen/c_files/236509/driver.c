#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
short var_3 = (short)18141;
unsigned int var_7 = 916939755U;
int var_8 = -851639237;
int var_9 = 447727860;
unsigned long long int var_10 = 10754924047411850596ULL;
int var_12 = 978832944;
int zero = 0;
unsigned char var_13 = (unsigned char)148;
unsigned short var_14 = (unsigned short)12261;
long long int var_15 = -5261911908133495479LL;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

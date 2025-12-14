#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17930093919990147754ULL;
unsigned long long int var_4 = 10586813213978743301ULL;
unsigned char var_7 = (unsigned char)104;
unsigned long long int var_8 = 10951810188666904618ULL;
unsigned short var_11 = (unsigned short)39108;
int zero = 0;
unsigned char var_12 = (unsigned char)194;
_Bool var_13 = (_Bool)1;
short var_14 = (short)544;
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

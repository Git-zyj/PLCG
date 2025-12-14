#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10727807034544633208ULL;
unsigned long long int var_6 = 11817629960750510990ULL;
unsigned char var_8 = (unsigned char)75;
unsigned char var_10 = (unsigned char)168;
int zero = 0;
long long int var_12 = -2872441415459049835LL;
unsigned short var_13 = (unsigned short)24496;
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

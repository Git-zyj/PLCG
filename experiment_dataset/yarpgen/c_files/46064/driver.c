#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
unsigned short var_7 = (unsigned short)25077;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)4164;
signed char var_18 = (signed char)77;
int zero = 0;
signed char var_19 = (signed char)-107;
int var_20 = 355313545;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

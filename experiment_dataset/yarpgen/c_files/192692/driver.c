#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -585229345;
unsigned short var_4 = (unsigned short)47367;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-98;
unsigned long long int var_8 = 9505063849103266714ULL;
int zero = 0;
unsigned int var_10 = 1006124877U;
unsigned long long int var_11 = 7867581659141342271ULL;
unsigned char var_12 = (unsigned char)86;
unsigned int var_13 = 3643200460U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

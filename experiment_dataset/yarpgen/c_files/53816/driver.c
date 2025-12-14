#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10492;
unsigned int var_2 = 468100457U;
unsigned short var_4 = (unsigned short)31071;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8319028633280433746LL;
unsigned int var_11 = 692822716U;
int zero = 0;
unsigned short var_12 = (unsigned short)391;
signed char var_13 = (signed char)83;
signed char var_14 = (signed char)-15;
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

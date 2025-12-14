#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7515359448249652771LL;
unsigned char var_1 = (unsigned char)29;
int var_3 = 714002771;
unsigned short var_4 = (unsigned short)11402;
unsigned short var_6 = (unsigned short)565;
short var_8 = (short)32024;
int var_9 = 398706274;
unsigned short var_10 = (unsigned short)24005;
int zero = 0;
unsigned short var_12 = (unsigned short)56809;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-51;
signed char var_15 = (signed char)90;
signed char var_16 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

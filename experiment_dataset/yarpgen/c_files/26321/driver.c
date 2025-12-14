#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 712548844U;
unsigned char var_2 = (unsigned char)90;
unsigned int var_4 = 484399427U;
unsigned int var_5 = 3053910412U;
short var_6 = (short)-21626;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_10 = -434703610;
short var_11 = (short)25691;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

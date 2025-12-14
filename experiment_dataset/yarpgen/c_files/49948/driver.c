#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -857307629;
signed char var_1 = (signed char)-65;
unsigned char var_2 = (unsigned char)51;
int var_3 = 368273715;
long long int var_4 = 8978598301780555093LL;
short var_6 = (short)12500;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)54;
long long int var_10 = -6703762991120945843LL;
int zero = 0;
unsigned short var_11 = (unsigned short)41907;
_Bool var_12 = (_Bool)0;
int var_13 = -257834202;
void init() {
}

void checksum() {
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

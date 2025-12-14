#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
short var_1 = (short)-31615;
unsigned char var_2 = (unsigned char)15;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)55;
signed char var_9 = (signed char)-2;
signed char var_10 = (signed char)-75;
short var_11 = (short)-27270;
unsigned int var_16 = 1702006687U;
int zero = 0;
signed char var_18 = (signed char)-114;
long long int var_19 = -4685108331013958508LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

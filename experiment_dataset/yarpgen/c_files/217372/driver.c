#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1345;
unsigned long long int var_6 = 16616081166824608193ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)104;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 13555915415815703638ULL;
int zero = 0;
short var_18 = (short)15748;
short var_19 = (short)22562;
unsigned char var_20 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

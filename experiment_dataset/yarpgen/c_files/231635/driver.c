#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13574;
int var_4 = 1138112877;
unsigned long long int var_6 = 9713431646027033374ULL;
int var_8 = -2059548681;
_Bool var_9 = (_Bool)1;
int var_12 = -1413935380;
unsigned char var_14 = (unsigned char)95;
signed char var_15 = (signed char)-25;
signed char var_16 = (signed char)-87;
int zero = 0;
signed char var_19 = (signed char)-109;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)1013;
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

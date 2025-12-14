#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-52;
unsigned long long int var_6 = 8890687852615091870ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)214;
unsigned char var_11 = (unsigned char)124;
long long int var_14 = -887400664073352271LL;
long long int var_16 = 3042507368367665492LL;
int zero = 0;
short var_19 = (short)6947;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-20126;
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

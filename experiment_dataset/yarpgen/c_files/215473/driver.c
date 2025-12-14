#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 1009060928424828110LL;
unsigned short var_4 = (unsigned short)45457;
unsigned char var_11 = (unsigned char)70;
long long int var_12 = -4195316525031803284LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-38;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
unsigned char var_18 = (unsigned char)127;
long long int var_19 = 3702627550985099222LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

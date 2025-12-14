#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2241112072U;
unsigned char var_2 = (unsigned char)183;
int var_4 = 1986219959;
signed char var_5 = (signed char)(-127 - 1);
signed char var_6 = (signed char)28;
unsigned int var_7 = 3694723011U;
unsigned int var_13 = 812556895U;
unsigned long long int var_15 = 449070210561432034ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)1300;
unsigned long long int var_20 = 1111992013794347617ULL;
signed char var_21 = (signed char)-124;
long long int var_22 = 87757356801712990LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

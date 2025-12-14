#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13005;
unsigned short var_3 = (unsigned short)19651;
unsigned long long int var_7 = 11643251214508499940ULL;
short var_8 = (short)1989;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)67;
unsigned short var_11 = (unsigned short)31726;
int zero = 0;
signed char var_12 = (signed char)4;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-15;
unsigned long long int var_15 = 2093252571067959236ULL;
long long int var_16 = 6545961423319618649LL;
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

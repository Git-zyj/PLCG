#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6282017140734379675ULL;
short var_3 = (short)5584;
signed char var_4 = (signed char)-116;
unsigned long long int var_5 = 737692397589703705ULL;
long long int var_9 = -9145328356082896733LL;
signed char var_10 = (signed char)81;
unsigned char var_12 = (unsigned char)104;
short var_15 = (short)28773;
int zero = 0;
short var_16 = (short)12731;
signed char var_17 = (signed char)28;
unsigned short var_18 = (unsigned short)63762;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)99;
long long int var_2 = 6368843158877655794LL;
signed char var_5 = (signed char)104;
long long int var_7 = 5735379302011987034LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)4068;
long long int var_11 = 539222064662530366LL;
long long int var_12 = -2151484370282379272LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)87;
long long int var_17 = 8206744638425316657LL;
long long int var_18 = 6645913287776870344LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60615;
unsigned long long int var_1 = 14545138366876794063ULL;
unsigned char var_2 = (unsigned char)183;
unsigned int var_5 = 1767466782U;
unsigned long long int var_6 = 18224800737281814174ULL;
short var_7 = (short)14590;
unsigned char var_8 = (unsigned char)192;
long long int var_10 = 9024269987007855672LL;
short var_11 = (short)25942;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-46;
unsigned short var_15 = (unsigned short)19148;
signed char var_16 = (signed char)117;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)14360;
int var_19 = 1761459328;
short var_20 = (short)14620;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

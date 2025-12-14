#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7313;
short var_1 = (short)-17816;
unsigned long long int var_11 = 2046025229439711892ULL;
signed char var_12 = (signed char)-67;
unsigned long long int var_14 = 11717524999007247037ULL;
long long int var_15 = -3579865993242844347LL;
unsigned char var_16 = (unsigned char)177;
int zero = 0;
unsigned char var_20 = (unsigned char)238;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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

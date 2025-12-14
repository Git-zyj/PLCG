#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1951561753;
short var_8 = (short)-24708;
signed char var_9 = (signed char)70;
unsigned long long int var_11 = 9694914376370778192ULL;
unsigned long long int var_13 = 11995032117756144936ULL;
unsigned short var_14 = (unsigned short)61989;
short var_15 = (short)-14078;
long long int var_18 = 1403994138663612024LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14497732404345078521ULL;
unsigned long long int var_21 = 12279635641086611090ULL;
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

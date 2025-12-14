#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
unsigned short var_2 = (unsigned short)44950;
unsigned int var_4 = 1643771334U;
signed char var_5 = (signed char)-35;
signed char var_11 = (signed char)-10;
long long int var_12 = 4405790548572868LL;
unsigned long long int var_16 = 6511912343502324992ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)35471;
int var_19 = 1620271486;
unsigned char var_20 = (unsigned char)43;
short var_21 = (short)-393;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 681972454;
unsigned short var_4 = (unsigned short)5841;
unsigned short var_6 = (unsigned short)11086;
short var_7 = (short)2900;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)42852;
unsigned int var_10 = 845309248U;
short var_11 = (short)-13587;
unsigned char var_14 = (unsigned char)142;
unsigned int var_16 = 1254496588U;
int zero = 0;
long long int var_17 = -5760473198310324130LL;
unsigned long long int var_18 = 10677999475305068892ULL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2446762189U;
unsigned int var_6 = 1902813970U;
unsigned char var_9 = (unsigned char)44;
unsigned long long int var_10 = 10947369328147278033ULL;
unsigned short var_11 = (unsigned short)4721;
_Bool var_13 = (_Bool)0;
signed char var_17 = (signed char)-10;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16478441123055105389ULL;
void init() {
}

void checksum() {
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

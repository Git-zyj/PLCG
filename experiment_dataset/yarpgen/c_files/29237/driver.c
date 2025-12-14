#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18320;
unsigned int var_5 = 3379860863U;
unsigned char var_6 = (unsigned char)208;
signed char var_7 = (signed char)-77;
long long int var_9 = 2847561531435416850LL;
_Bool var_13 = (_Bool)0;
long long int var_15 = -2831225061680797799LL;
int zero = 0;
signed char var_16 = (signed char)-26;
int var_17 = 54257310;
long long int var_18 = -8743015594119534958LL;
unsigned int var_19 = 2788884227U;
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

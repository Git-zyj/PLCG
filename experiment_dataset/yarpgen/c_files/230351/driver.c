#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9075900124003993979LL;
short var_2 = (short)2178;
short var_4 = (short)-31610;
unsigned short var_5 = (unsigned short)44145;
signed char var_9 = (signed char)-50;
unsigned long long int var_11 = 14776411381700536503ULL;
unsigned int var_13 = 449575999U;
signed char var_15 = (signed char)85;
unsigned long long int var_18 = 12462690599602270369ULL;
signed char var_19 = (signed char)-109;
int zero = 0;
signed char var_20 = (signed char)6;
signed char var_21 = (signed char)-39;
unsigned long long int var_22 = 15904809339684052890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-34;
long long int var_3 = -6147723224263825086LL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)39;
unsigned int var_9 = 1424258802U;
short var_11 = (short)18163;
short var_14 = (short)-28205;
short var_15 = (short)-32327;
unsigned short var_16 = (unsigned short)40102;
short var_17 = (short)-16731;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2457726177U;
long long int var_20 = 7437973717948890308LL;
void init() {
}

void checksum() {
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

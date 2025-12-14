#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2657945353U;
int var_1 = 769877183;
signed char var_2 = (signed char)-49;
unsigned char var_4 = (unsigned char)210;
signed char var_8 = (signed char)-94;
long long int var_9 = -1466408294232008410LL;
int zero = 0;
long long int var_10 = 5058492659008779506LL;
signed char var_11 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
short var_5 = (short)-17629;
unsigned int var_7 = 4077625231U;
unsigned int var_18 = 1537842931U;
int zero = 0;
unsigned long long int var_19 = 11765328569606550708ULL;
unsigned short var_20 = (unsigned short)45480;
unsigned int var_21 = 3054424888U;
long long int var_22 = 6410125993745479532LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

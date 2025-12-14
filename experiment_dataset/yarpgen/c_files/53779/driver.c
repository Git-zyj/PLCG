#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned long long int var_2 = 16864438468348046436ULL;
short var_4 = (short)-31659;
short var_8 = (short)2099;
unsigned int var_9 = 2821211457U;
unsigned long long int var_11 = 3393087197164051963ULL;
short var_13 = (short)-26831;
short var_16 = (short)3363;
unsigned int var_17 = 1268129185U;
int zero = 0;
unsigned long long int var_18 = 1173557903447262391ULL;
unsigned int var_19 = 2623331348U;
signed char var_20 = (signed char)78;
unsigned long long int var_21 = 5497065475187115589ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-28722;
unsigned long long int var_4 = 4006128648325316659ULL;
unsigned int var_5 = 1451049318U;
unsigned char var_6 = (unsigned char)212;
int var_9 = 949575280;
signed char var_10 = (signed char)102;
signed char var_11 = (signed char)-26;
_Bool var_13 = (_Bool)1;
int var_14 = 645483149;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 16276856657384549353ULL;
long long int var_17 = -4085552486732268234LL;
unsigned int var_18 = 26906790U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

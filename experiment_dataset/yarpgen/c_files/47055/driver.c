#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
unsigned short var_1 = (unsigned short)44461;
signed char var_3 = (signed char)-28;
int var_4 = 2103807176;
unsigned short var_8 = (unsigned short)10128;
long long int var_9 = -3125193017124534172LL;
unsigned long long int var_13 = 17554692310355058883ULL;
unsigned short var_17 = (unsigned short)19393;
unsigned long long int var_18 = 3473704702713338268ULL;
int zero = 0;
int var_20 = 698383852;
unsigned long long int var_21 = 16431673467603790835ULL;
unsigned long long int var_22 = 8967104436412111636ULL;
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

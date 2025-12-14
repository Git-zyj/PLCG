#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -702623733;
unsigned int var_1 = 425899877U;
long long int var_2 = 5238048369536071790LL;
int var_5 = -620976618;
unsigned short var_7 = (unsigned short)46838;
unsigned long long int var_8 = 4518214212454073714ULL;
signed char var_11 = (signed char)27;
long long int var_14 = 8963847785216882001LL;
int zero = 0;
short var_15 = (short)-29863;
long long int var_16 = -185032755396934504LL;
long long int var_17 = -3065588282139890443LL;
unsigned int var_18 = 931767979U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

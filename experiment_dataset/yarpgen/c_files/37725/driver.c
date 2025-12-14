#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
signed char var_2 = (signed char)95;
unsigned char var_3 = (unsigned char)19;
long long int var_6 = -3319760738397705525LL;
unsigned int var_7 = 4100136079U;
unsigned int var_8 = 449087758U;
short var_10 = (short)31775;
long long int var_12 = 4521536138381886674LL;
unsigned char var_13 = (unsigned char)40;
unsigned int var_16 = 2357704746U;
int zero = 0;
unsigned long long int var_17 = 18309969681574708494ULL;
long long int var_18 = 3141983666099269382LL;
short var_19 = (short)3680;
unsigned char var_20 = (unsigned char)180;
signed char var_21 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

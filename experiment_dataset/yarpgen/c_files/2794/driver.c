#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7742;
unsigned long long int var_3 = 10140404808603570486ULL;
short var_6 = (short)28895;
short var_8 = (short)18832;
int zero = 0;
int var_10 = 790394135;
long long int var_11 = -99719679098212692LL;
unsigned long long int var_12 = 16122282015624322998ULL;
unsigned long long int var_13 = 12169271903904557171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

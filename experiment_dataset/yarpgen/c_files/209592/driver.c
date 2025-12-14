#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)89;
signed char var_6 = (signed char)-29;
signed char var_7 = (signed char)24;
unsigned short var_10 = (unsigned short)7849;
unsigned long long int var_13 = 7779148122686984796ULL;
unsigned short var_15 = (unsigned short)43677;
int zero = 0;
long long int var_17 = 5862917892750515263LL;
long long int var_18 = -3874601263195990939LL;
unsigned short var_19 = (unsigned short)5115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

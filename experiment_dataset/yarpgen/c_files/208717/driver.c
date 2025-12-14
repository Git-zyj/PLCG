#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
signed char var_8 = (signed char)-61;
short var_9 = (short)-2615;
int var_10 = 1591336461;
int zero = 0;
unsigned short var_16 = (unsigned short)4733;
long long int var_17 = 6299778780482693300LL;
unsigned int var_18 = 229914908U;
short var_19 = (short)10485;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

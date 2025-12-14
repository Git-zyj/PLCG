#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3139781436361680040LL;
int var_2 = -1796980086;
short var_3 = (short)-14341;
short var_5 = (short)-13234;
signed char var_6 = (signed char)-17;
int var_8 = 534645192;
int zero = 0;
unsigned long long int var_11 = 5852758111369990206ULL;
long long int var_12 = -2644288081307181802LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

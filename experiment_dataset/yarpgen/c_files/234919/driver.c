#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
unsigned short var_5 = (unsigned short)26809;
unsigned int var_7 = 179772952U;
signed char var_10 = (signed char)109;
signed char var_12 = (signed char)82;
signed char var_13 = (signed char)117;
int zero = 0;
unsigned int var_14 = 2130318152U;
short var_15 = (short)-24274;
long long int var_16 = -8626082781921004626LL;
long long int var_17 = -8331214185124599524LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

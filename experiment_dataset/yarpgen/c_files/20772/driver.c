#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
long long int var_1 = -1652948824372792334LL;
unsigned short var_2 = (unsigned short)53842;
short var_3 = (short)22168;
long long int var_4 = 6160510463896466943LL;
unsigned int var_6 = 2544365472U;
signed char var_7 = (signed char)99;
short var_8 = (short)26943;
int zero = 0;
int var_10 = 2094213132;
long long int var_11 = 8945627293208582225LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9391848265551119377ULL;
long long int var_4 = -3556301331788854111LL;
unsigned char var_6 = (unsigned char)109;
long long int var_7 = 1470044206854230549LL;
int var_11 = -178239517;
int zero = 0;
signed char var_12 = (signed char)-87;
short var_13 = (short)20237;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2872257065U;
unsigned short var_11 = (unsigned short)18039;
signed char var_13 = (signed char)-104;
signed char var_17 = (signed char)89;
int zero = 0;
unsigned int var_19 = 1555466395U;
int var_20 = 1323126097;
unsigned short var_21 = (unsigned short)46670;
short var_22 = (short)31113;
unsigned short var_23 = (unsigned short)41777;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

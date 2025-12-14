#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_3 = -431543452;
unsigned short var_4 = (unsigned short)10021;
short var_6 = (short)-31147;
signed char var_8 = (signed char)26;
signed char var_9 = (signed char)-113;
long long int var_10 = 7892584566826224191LL;
int zero = 0;
unsigned int var_12 = 4224561727U;
short var_13 = (short)24474;
unsigned short var_14 = (unsigned short)35002;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 919823273880993984LL;
unsigned short var_2 = (unsigned short)24552;
signed char var_4 = (signed char)38;
unsigned long long int var_12 = 18361140447136136509ULL;
unsigned long long int var_17 = 9264239605680783079ULL;
int zero = 0;
signed char var_19 = (signed char)-57;
unsigned char var_20 = (unsigned char)56;
signed char var_21 = (signed char)123;
unsigned int var_22 = 1546463994U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

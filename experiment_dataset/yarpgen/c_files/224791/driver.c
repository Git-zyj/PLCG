#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9604835338164123068ULL;
unsigned int var_4 = 3336588998U;
signed char var_7 = (signed char)-35;
unsigned short var_8 = (unsigned short)64465;
long long int var_16 = 442985030647763981LL;
int zero = 0;
int var_19 = 1414882071;
unsigned char var_20 = (unsigned char)28;
signed char var_21 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

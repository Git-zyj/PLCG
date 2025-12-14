#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
signed char var_4 = (signed char)-59;
unsigned short var_5 = (unsigned short)54539;
unsigned long long int var_10 = 11182675262314553320ULL;
int zero = 0;
long long int var_12 = -4962599780576430535LL;
int var_13 = -1998081039;
unsigned int var_14 = 2032473150U;
int var_15 = 1277416934;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

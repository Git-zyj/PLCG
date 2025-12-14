#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9795624618800243653ULL;
unsigned int var_2 = 629152954U;
signed char var_3 = (signed char)-118;
unsigned char var_4 = (unsigned char)155;
int zero = 0;
unsigned short var_15 = (unsigned short)60823;
unsigned short var_16 = (unsigned short)15546;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

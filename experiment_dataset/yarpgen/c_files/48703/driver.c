#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)49852;
unsigned long long int var_5 = 2510686194479110240ULL;
unsigned short var_6 = (unsigned short)42436;
unsigned long long int var_7 = 15773723578009359990ULL;
unsigned char var_9 = (unsigned char)151;
int zero = 0;
unsigned short var_10 = (unsigned short)57494;
unsigned short var_11 = (unsigned short)61868;
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

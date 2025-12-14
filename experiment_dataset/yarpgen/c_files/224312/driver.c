#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
signed char var_5 = (signed char)80;
unsigned short var_6 = (unsigned short)9644;
signed char var_12 = (signed char)-30;
signed char var_16 = (signed char)122;
unsigned short var_18 = (unsigned short)49701;
signed char var_19 = (signed char)-21;
int zero = 0;
int var_20 = -845664243;
signed char var_21 = (signed char)-109;
void init() {
}

void checksum() {
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

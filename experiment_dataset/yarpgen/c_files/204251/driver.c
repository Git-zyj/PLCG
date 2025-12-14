#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)56859;
unsigned short var_5 = (unsigned short)31723;
unsigned short var_6 = (unsigned short)7381;
unsigned char var_8 = (unsigned char)107;
signed char var_10 = (signed char)-55;
int var_12 = -383992791;
unsigned char var_14 = (unsigned char)64;
int zero = 0;
signed char var_20 = (signed char)94;
long long int var_21 = 6518391439367521138LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6098;
signed char var_2 = (signed char)-112;
unsigned long long int var_4 = 1805835417601970177ULL;
int var_5 = -1269916138;
short var_6 = (short)28399;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 11870524523285483801ULL;
unsigned short var_9 = (unsigned short)57988;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)54;
int zero = 0;
unsigned short var_12 = (unsigned short)61645;
signed char var_13 = (signed char)18;
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

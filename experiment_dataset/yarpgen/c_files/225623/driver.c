#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6099820097758468277LL;
unsigned short var_2 = (unsigned short)20967;
signed char var_3 = (signed char)100;
unsigned char var_4 = (unsigned char)64;
unsigned char var_5 = (unsigned char)47;
signed char var_6 = (signed char)106;
signed char var_9 = (signed char)36;
long long int var_10 = -2105096499910747633LL;
long long int var_11 = 8269155636974196921LL;
unsigned short var_12 = (unsigned short)15148;
int zero = 0;
signed char var_13 = (signed char)-104;
long long int var_14 = 4141803582035228867LL;
void init() {
}

void checksum() {
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

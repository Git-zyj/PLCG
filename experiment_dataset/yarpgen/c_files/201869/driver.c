#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned int var_2 = 3709550723U;
int var_7 = -1377208463;
unsigned char var_9 = (unsigned char)40;
unsigned char var_10 = (unsigned char)72;
int zero = 0;
int var_19 = -1997403948;
unsigned short var_20 = (unsigned short)36391;
unsigned long long int var_21 = 17159695552064706774ULL;
signed char var_22 = (signed char)107;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1085387003U;
unsigned char var_3 = (unsigned char)115;
unsigned int var_6 = 439716039U;
unsigned long long int var_9 = 4233242338470557066ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)57;
signed char var_11 = (signed char)-5;
unsigned short var_12 = (unsigned short)56260;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

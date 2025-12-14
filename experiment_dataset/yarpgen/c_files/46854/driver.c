#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 504525155965808832LL;
long long int var_5 = 7938353974526215995LL;
signed char var_8 = (signed char)107;
unsigned char var_11 = (unsigned char)179;
signed char var_12 = (signed char)-24;
unsigned int var_15 = 3754994664U;
int zero = 0;
unsigned int var_17 = 3139722650U;
unsigned char var_18 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

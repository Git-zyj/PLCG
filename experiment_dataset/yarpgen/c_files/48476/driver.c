#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1207050569U;
signed char var_2 = (signed char)-115;
unsigned long long int var_7 = 17590234314036226165ULL;
signed char var_9 = (signed char)106;
int zero = 0;
signed char var_13 = (signed char)115;
unsigned char var_14 = (unsigned char)121;
short var_15 = (short)1149;
void init() {
}

void checksum() {
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

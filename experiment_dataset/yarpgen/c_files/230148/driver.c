#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -735052420;
unsigned long long int var_4 = 7981954645235946727ULL;
unsigned long long int var_7 = 16970183424574147858ULL;
short var_8 = (short)-9438;
int zero = 0;
signed char var_10 = (signed char)-62;
unsigned int var_11 = 2237630143U;
unsigned short var_12 = (unsigned short)16816;
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

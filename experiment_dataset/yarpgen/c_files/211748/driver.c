#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3920964148935672436ULL;
unsigned int var_6 = 1444821882U;
unsigned long long int var_8 = 18300198131685980051ULL;
unsigned long long int var_10 = 5622672798930846520ULL;
short var_11 = (short)-15561;
int var_14 = -389360412;
unsigned long long int var_15 = 15788339046207118655ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)36;
signed char var_19 = (signed char)121;
unsigned int var_20 = 3072831219U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

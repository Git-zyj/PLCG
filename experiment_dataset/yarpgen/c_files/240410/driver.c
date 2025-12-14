#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6726;
signed char var_1 = (signed char)127;
signed char var_2 = (signed char)-72;
int var_4 = -971740381;
short var_5 = (short)14827;
unsigned int var_6 = 295143762U;
unsigned long long int var_7 = 16627779637951770913ULL;
int var_8 = -1288152044;
int var_9 = 1019056260;
int zero = 0;
unsigned char var_10 = (unsigned char)28;
signed char var_11 = (signed char)15;
short var_12 = (short)2285;
unsigned long long int var_13 = 15676628039698601079ULL;
signed char var_14 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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

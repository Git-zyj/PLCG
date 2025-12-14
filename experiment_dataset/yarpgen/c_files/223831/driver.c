#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64626;
long long int var_1 = -8560802816918867965LL;
signed char var_2 = (signed char)-76;
unsigned long long int var_3 = 14047595296358450745ULL;
signed char var_5 = (signed char)-24;
int var_8 = 592556170;
int zero = 0;
unsigned long long int var_10 = 15218506189141141224ULL;
signed char var_11 = (signed char)-34;
long long int var_12 = 6084416861176595518LL;
short var_13 = (short)1327;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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

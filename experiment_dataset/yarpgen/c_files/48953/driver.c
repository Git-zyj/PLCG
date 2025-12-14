#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18309596485219425013ULL;
unsigned int var_2 = 3631209225U;
int var_3 = -26643225;
unsigned char var_4 = (unsigned char)73;
unsigned short var_5 = (unsigned short)22502;
unsigned short var_6 = (unsigned short)49713;
unsigned short var_9 = (unsigned short)65046;
int zero = 0;
signed char var_12 = (signed char)-102;
int var_13 = -1279956660;
int var_14 = -2029913924;
unsigned long long int var_15 = 6394330296821909167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

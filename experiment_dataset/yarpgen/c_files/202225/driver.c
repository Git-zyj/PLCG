#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)57;
unsigned short var_3 = (unsigned short)50496;
int var_5 = -25156175;
unsigned long long int var_6 = 9676654719210110783ULL;
int var_11 = 447318131;
int zero = 0;
unsigned long long int var_15 = 18193019726461039518ULL;
unsigned short var_16 = (unsigned short)49054;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

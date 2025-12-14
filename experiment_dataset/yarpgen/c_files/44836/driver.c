#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30382;
unsigned long long int var_2 = 3743938658106073797ULL;
long long int var_3 = -6980395278519361848LL;
int var_10 = -773956018;
unsigned char var_17 = (unsigned char)157;
int zero = 0;
int var_19 = -813003371;
unsigned long long int var_20 = 6818616765122427836ULL;
void init() {
}

void checksum() {
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

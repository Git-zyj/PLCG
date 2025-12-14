#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 809868918;
unsigned long long int var_2 = 15151673583793739380ULL;
signed char var_8 = (signed char)93;
unsigned int var_9 = 3793449591U;
short var_18 = (short)22328;
int var_19 = 915371839;
int zero = 0;
unsigned short var_20 = (unsigned short)43533;
unsigned short var_21 = (unsigned short)33109;
int var_22 = 2057679960;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

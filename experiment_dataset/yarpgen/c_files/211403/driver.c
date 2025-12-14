#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1029766422;
unsigned short var_3 = (unsigned short)9910;
signed char var_10 = (signed char)-111;
short var_11 = (short)4447;
unsigned short var_12 = (unsigned short)18343;
int zero = 0;
unsigned long long int var_13 = 12237639646139769375ULL;
int var_14 = 1832380602;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23113;
unsigned long long int var_9 = 17592058580700915569ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)8;
int var_18 = 1897088065;
unsigned long long int var_19 = 6527250464355158511ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

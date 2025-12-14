#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26637;
long long int var_2 = 2691789195500413542LL;
unsigned long long int var_11 = 1887775290591192686ULL;
int zero = 0;
short var_14 = (short)-906;
unsigned short var_15 = (unsigned short)41034;
void init() {
}

void checksum() {
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

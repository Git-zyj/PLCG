#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2237396854780318701LL;
short var_2 = (short)25296;
unsigned int var_3 = 1163489904U;
short var_8 = (short)-17826;
long long int var_9 = 5720417280221966634LL;
short var_10 = (short)-29919;
int zero = 0;
short var_14 = (short)-2415;
short var_15 = (short)-29568;
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

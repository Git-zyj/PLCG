#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23115;
unsigned long long int var_3 = 2053263323157532893ULL;
signed char var_4 = (signed char)-35;
short var_5 = (short)-23769;
unsigned short var_9 = (unsigned short)39313;
int zero = 0;
long long int var_13 = -8116484059194070956LL;
unsigned short var_14 = (unsigned short)59577;
short var_15 = (short)-14666;
void init() {
}

void checksum() {
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

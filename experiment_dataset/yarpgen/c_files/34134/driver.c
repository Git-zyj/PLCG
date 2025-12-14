#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2578;
unsigned short var_3 = (unsigned short)20389;
short var_4 = (short)16420;
unsigned long long int var_8 = 9281698720152199269ULL;
short var_9 = (short)-10389;
unsigned int var_10 = 4096253234U;
signed char var_12 = (signed char)-16;
int zero = 0;
signed char var_13 = (signed char)37;
long long int var_14 = 5173917835315259764LL;
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

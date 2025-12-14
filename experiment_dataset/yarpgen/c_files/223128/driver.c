#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-45;
unsigned int var_2 = 914309382U;
unsigned long long int var_3 = 16028699114279839775ULL;
unsigned int var_6 = 1623698496U;
unsigned long long int var_7 = 1905166767158331593ULL;
long long int var_8 = -3628151627516758767LL;
short var_9 = (short)23230;
int zero = 0;
signed char var_10 = (signed char)-9;
short var_11 = (short)20276;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

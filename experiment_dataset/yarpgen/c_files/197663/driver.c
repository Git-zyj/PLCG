#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 7619606542096378959LL;
unsigned long long int var_8 = 12888918209061689128ULL;
signed char var_9 = (signed char)-77;
unsigned char var_14 = (unsigned char)76;
unsigned int var_16 = 2563182583U;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
signed char var_20 = (signed char)-105;
unsigned long long int var_21 = 4670794308451799168ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

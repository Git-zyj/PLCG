#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4747799804406543265ULL;
short var_1 = (short)25802;
signed char var_10 = (signed char)-117;
unsigned char var_12 = (unsigned char)219;
long long int var_15 = 2432391615251244083LL;
int zero = 0;
unsigned long long int var_18 = 9269810879964734170ULL;
short var_19 = (short)-29421;
void init() {
}

void checksum() {
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

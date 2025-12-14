#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3699085790U;
unsigned long long int var_2 = 8960453102215198060ULL;
unsigned int var_4 = 1247526970U;
unsigned long long int var_5 = 13952577831911811932ULL;
signed char var_9 = (signed char)-117;
unsigned long long int var_10 = 14025592832363651163ULL;
unsigned int var_16 = 3965530572U;
int zero = 0;
long long int var_17 = 3118899402444838551LL;
signed char var_18 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

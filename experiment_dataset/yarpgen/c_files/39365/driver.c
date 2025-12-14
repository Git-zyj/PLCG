#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 685622366;
unsigned int var_3 = 1404289612U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7700245357428511417ULL;
signed char var_6 = (signed char)63;
unsigned int var_7 = 3949039862U;
int var_9 = -1011083847;
int zero = 0;
int var_11 = 1670360243;
signed char var_12 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

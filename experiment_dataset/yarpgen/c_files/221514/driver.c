#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20305;
unsigned short var_1 = (unsigned short)41381;
signed char var_3 = (signed char)-124;
signed char var_6 = (signed char)11;
long long int var_9 = 259081196284811422LL;
int var_10 = -543526718;
unsigned long long int var_12 = 14965075024675321903ULL;
long long int var_13 = -1483472580782318570LL;
int zero = 0;
unsigned short var_14 = (unsigned short)29002;
unsigned long long int var_15 = 8615181820947142231ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1179897351;
unsigned long long int var_6 = 13870990755352632325ULL;
unsigned short var_15 = (unsigned short)42505;
int zero = 0;
unsigned long long int var_17 = 4841387726262084370ULL;
unsigned long long int var_18 = 1670687996504428211ULL;
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

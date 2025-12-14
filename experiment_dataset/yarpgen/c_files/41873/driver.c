#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17542459522240666619ULL;
unsigned long long int var_2 = 16014509072617850902ULL;
unsigned long long int var_5 = 6478791026177677ULL;
signed char var_6 = (signed char)-82;
signed char var_7 = (signed char)86;
int zero = 0;
unsigned short var_10 = (unsigned short)57366;
unsigned short var_11 = (unsigned short)4017;
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

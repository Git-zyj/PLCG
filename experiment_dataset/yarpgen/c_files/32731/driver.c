#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-56;
unsigned char var_7 = (unsigned char)60;
unsigned int var_17 = 548051219U;
int zero = 0;
unsigned short var_18 = (unsigned short)63246;
signed char var_19 = (signed char)-5;
unsigned long long int var_20 = 1990370392048106569ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

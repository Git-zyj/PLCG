#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)40698;
unsigned short var_8 = (unsigned short)15626;
unsigned short var_13 = (unsigned short)52915;
unsigned short var_14 = (unsigned short)4888;
unsigned short var_16 = (unsigned short)63656;
unsigned short var_18 = (unsigned short)57473;
unsigned short var_19 = (unsigned short)46082;
int zero = 0;
unsigned short var_20 = (unsigned short)9088;
unsigned short var_21 = (unsigned short)56029;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63621;
signed char var_1 = (signed char)-104;
short var_4 = (short)-969;
long long int var_6 = 8043190060638506341LL;
long long int var_7 = 4593120800000842960LL;
unsigned long long int var_8 = 1865397782151763467ULL;
unsigned int var_9 = 1261569816U;
unsigned short var_11 = (unsigned short)28316;
unsigned short var_14 = (unsigned short)44403;
int zero = 0;
unsigned short var_19 = (unsigned short)54791;
unsigned short var_20 = (unsigned short)18888;
void init() {
}

void checksum() {
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

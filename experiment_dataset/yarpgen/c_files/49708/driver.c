#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
unsigned int var_2 = 2240363779U;
long long int var_8 = -4441851351402716292LL;
signed char var_9 = (signed char)19;
int var_13 = 1729814817;
long long int var_14 = -7203644910420166973LL;
short var_15 = (short)-6555;
int zero = 0;
unsigned int var_17 = 1482238118U;
unsigned short var_18 = (unsigned short)64312;
unsigned short var_19 = (unsigned short)41947;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

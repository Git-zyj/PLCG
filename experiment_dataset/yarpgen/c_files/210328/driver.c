#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
unsigned short var_1 = (unsigned short)4194;
unsigned short var_3 = (unsigned short)11582;
int var_5 = -1413987315;
signed char var_9 = (signed char)58;
signed char var_13 = (signed char)116;
int var_15 = -64154913;
int var_17 = -823291765;
int zero = 0;
unsigned char var_18 = (unsigned char)55;
unsigned short var_19 = (unsigned short)5681;
signed char var_20 = (signed char)111;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1773819287253638845LL;
unsigned char var_9 = (unsigned char)41;
long long int var_14 = 5849292347229364059LL;
unsigned char var_18 = (unsigned char)145;
int zero = 0;
long long int var_19 = 2435287153001693103LL;
short var_20 = (short)-20699;
unsigned short var_21 = (unsigned short)13175;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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

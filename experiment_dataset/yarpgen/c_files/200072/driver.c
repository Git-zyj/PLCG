#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3858965267612396636LL;
int var_7 = -668400739;
unsigned long long int var_9 = 2402578096922041383ULL;
int zero = 0;
int var_12 = -1343791630;
unsigned long long int var_13 = 18243817309295489122ULL;
unsigned short var_14 = (unsigned short)14611;
long long int var_15 = 5484419118919227428LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

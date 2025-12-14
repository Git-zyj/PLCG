#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8717219337143593349LL;
signed char var_1 = (signed char)60;
unsigned short var_2 = (unsigned short)43074;
long long int var_4 = 2570627187608726135LL;
unsigned char var_10 = (unsigned char)6;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)163;
unsigned short var_14 = (unsigned short)51163;
long long int var_15 = 9046882161131822140LL;
void init() {
}

void checksum() {
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

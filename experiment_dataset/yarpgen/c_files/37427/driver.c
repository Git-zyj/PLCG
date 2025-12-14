#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16203829121295587895ULL;
int var_9 = 1000165467;
unsigned long long int var_13 = 11715395776504760378ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)62039;
signed char var_16 = (signed char)-37;
unsigned long long int var_17 = 9275832796108634065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

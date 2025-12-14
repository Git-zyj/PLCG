#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1266514259584848964LL;
unsigned long long int var_3 = 7320442415569884327ULL;
short var_9 = (short)32425;
unsigned long long int var_11 = 16625061019373873398ULL;
int zero = 0;
unsigned int var_12 = 3443410230U;
signed char var_13 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

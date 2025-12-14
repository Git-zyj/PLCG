#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1341567225907570408ULL;
unsigned long long int var_6 = 8811372031895994810ULL;
unsigned short var_9 = (unsigned short)781;
unsigned short var_10 = (unsigned short)32629;
unsigned long long int var_11 = 5488123698379648969ULL;
unsigned long long int var_12 = 8878220449232420413ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)41551;
unsigned short var_14 = (unsigned short)38482;
unsigned long long int var_15 = 9054073897096874540ULL;
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

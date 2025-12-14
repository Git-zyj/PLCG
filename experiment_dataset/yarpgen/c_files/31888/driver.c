#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 386826489676417984LL;
unsigned short var_6 = (unsigned short)30925;
long long int var_11 = 6694350423947322648LL;
int zero = 0;
int var_18 = 1839837447;
unsigned int var_19 = 534333243U;
void init() {
}

void checksum() {
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

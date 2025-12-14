#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned int var_2 = 659550094U;
signed char var_3 = (signed char)117;
long long int var_4 = 421799172251167494LL;
unsigned long long int var_6 = 15633595940270527684ULL;
unsigned int var_7 = 3542773939U;
unsigned int var_9 = 1979727986U;
short var_12 = (short)23706;
int zero = 0;
long long int var_13 = -736284219778801282LL;
unsigned int var_14 = 406985618U;
unsigned int var_15 = 2545004761U;
unsigned long long int var_16 = 1234754153823562261ULL;
unsigned char var_17 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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

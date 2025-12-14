#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3263556481U;
unsigned char var_1 = (unsigned char)72;
unsigned char var_2 = (unsigned char)27;
signed char var_12 = (signed char)32;
unsigned char var_14 = (unsigned char)60;
unsigned int var_16 = 28270908U;
short var_17 = (short)1238;
int zero = 0;
signed char var_18 = (signed char)-7;
unsigned long long int var_19 = 17495095361247662294ULL;
unsigned int var_20 = 3817808528U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2937939763U;
long long int var_3 = -989021050879544368LL;
long long int var_6 = -2522269354732338909LL;
long long int var_7 = 8210411486681543779LL;
short var_9 = (short)-12801;
signed char var_11 = (signed char)124;
signed char var_14 = (signed char)-85;
int zero = 0;
short var_15 = (short)19819;
long long int var_16 = 4766905252843156474LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

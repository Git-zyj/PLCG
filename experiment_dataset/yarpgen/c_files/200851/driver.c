#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
signed char var_3 = (signed char)-51;
unsigned long long int var_4 = 10835877751479826679ULL;
signed char var_7 = (signed char)47;
unsigned int var_8 = 2276302034U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 6233455474905419475ULL;
short var_13 = (short)-3540;
unsigned long long int var_14 = 1407632155924262589ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

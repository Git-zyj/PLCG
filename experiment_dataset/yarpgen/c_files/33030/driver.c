#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1077236261U;
short var_3 = (short)-29215;
signed char var_5 = (signed char)-1;
signed char var_6 = (signed char)59;
signed char var_7 = (signed char)46;
short var_11 = (short)9001;
short var_12 = (short)-16741;
int zero = 0;
signed char var_13 = (signed char)-95;
signed char var_14 = (signed char)-91;
short var_15 = (short)-6996;
short var_16 = (short)-26645;
signed char var_17 = (signed char)91;
signed char var_18 = (signed char)9;
unsigned int var_19 = 1560121710U;
signed char var_20 = (signed char)-62;
long long int var_21 = 5613755615189517167LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

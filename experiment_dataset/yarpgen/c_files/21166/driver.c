#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
signed char var_1 = (signed char)127;
int var_2 = 579099377;
signed char var_6 = (signed char)47;
unsigned short var_12 = (unsigned short)25707;
unsigned long long int var_13 = 17807530037358058347ULL;
signed char var_14 = (signed char)-2;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1490319942U;
int var_20 = 853223216;
signed char var_21 = (signed char)59;
void init() {
}

void checksum() {
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

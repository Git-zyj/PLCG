#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1873000163636173390ULL;
signed char var_1 = (signed char)44;
int var_4 = 1551378988;
int var_7 = 1911303867;
unsigned int var_9 = 1299131338U;
short var_10 = (short)-25512;
unsigned int var_12 = 3969833131U;
unsigned short var_13 = (unsigned short)7772;
unsigned int var_14 = 3407351911U;
unsigned int var_16 = 218116486U;
signed char var_17 = (signed char)110;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-102;
short var_20 = (short)9314;
_Bool var_21 = (_Bool)1;
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

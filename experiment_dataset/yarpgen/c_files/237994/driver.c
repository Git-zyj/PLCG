#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
short var_2 = (short)22514;
unsigned long long int var_3 = 15795926782923129953ULL;
short var_8 = (short)-9316;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 866839438U;
unsigned short var_16 = (unsigned short)26805;
int var_17 = 307798125;
signed char var_18 = (signed char)-33;
int zero = 0;
unsigned long long int var_19 = 5480835052876095223ULL;
unsigned long long int var_20 = 14599712645906403415ULL;
void init() {
}

void checksum() {
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

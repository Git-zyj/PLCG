#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7674761625594394494LL;
unsigned long long int var_3 = 12285634750211292636ULL;
short var_4 = (short)2113;
unsigned int var_10 = 3154839080U;
unsigned short var_11 = (unsigned short)19521;
signed char var_17 = (signed char)-79;
unsigned short var_18 = (unsigned short)46160;
int zero = 0;
signed char var_19 = (signed char)-57;
unsigned int var_20 = 276376080U;
unsigned long long int var_21 = 15145720097009491085ULL;
void init() {
}

void checksum() {
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

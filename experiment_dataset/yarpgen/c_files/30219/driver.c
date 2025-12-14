#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27620;
unsigned short var_1 = (unsigned short)23707;
unsigned char var_4 = (unsigned char)222;
unsigned int var_5 = 2476171806U;
short var_6 = (short)9993;
long long int var_7 = -2612462350977213151LL;
unsigned int var_9 = 1564913802U;
long long int var_10 = 1990755501144878464LL;
unsigned short var_11 = (unsigned short)38143;
int zero = 0;
unsigned long long int var_13 = 13844003623175622175ULL;
signed char var_14 = (signed char)-103;
void init() {
}

void checksum() {
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
